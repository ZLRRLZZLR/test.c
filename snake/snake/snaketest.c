#include"snake.h"

void SetPos(short x, short y)
{
	COORD pos = { x,y };
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(houtput, pos);

}

void GameStart(psnake ps)
{
	WelcomeToGame();
	CreatMap();
	InitSnake(ps);
	CreateFood(ps);

}

void GameRun(psnake ps)
{
	do
	{
		PrintHelpInfo(ps);
		if(KEY_PRESS(VK_UP) && ps->_Dir != DOWN)
		{
			ps->_Dir = UP;
		}
		else if(KEY_PRESS(VK_DOWN) && ps->_Dir != UP)
		{
			ps->_Dir = DOWN;
		}
		else if (KEY_PRESS(VK_LEFT) && ps->_Dir != RIGHT)
		{
			ps->_Dir = LEFT;
		}
		else if (KEY_PRESS(VK_SPACE))
		{
			pause();
		}
		else if (KEY_PRESS(VK_RIGHT) && ps->_Dir != LEFT)
		{
			ps->_Dir = RIGHT;
		}
		else if (KEY_PRESS(VK_F3))
		{
			if(ps->_SleepTime >= 50)
			{
				ps->_SleepTime -= 30;
				ps->_FoodScore += 2;
			}
		}
		else if (KEY_PRESS(VK_F4))
		{
			if (ps->_SleepTime < 350)
			{
				ps->_SleepTime += 30;
				ps->_FoodScore -= 2;
			}
			if(ps->_SleepTime == 350)
			{
				ps->_FoodScore = 1;
			}
		}
		else if (KEY_PRESS(VK_ESCAPE))
		{
			ps->_State = END_NORMAL;
			break;
		}
		Sleep(ps->_SleepTime);
		SnakeMove(ps);
	} while (ps->_State == OK);
}

void GameEnd(psnake ps)
{
	pSnakeNode cur = ps->_Psnake;
	SetPos(24, 12);
	switch(ps->_State)
	{
	case END_NORMAL:
		printf("您退出了游戏，游戏结束！");
		break;
	case KILL_BY_SELF:
		printf("您吃到了自己，游戏结束！");
		break;
	case KILL_BY_WALL:
		printf("您撞到了墙，游戏结束！");
		break;
	}
	while (cur)
	{
		pSnakeNode next = cur->next;
		free(cur);
		cur = next;
	}

}

void SnakeMove(psnake ps)
{
	pSnakeNode cur = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (NULL == cur)
	{
		perror("InitSnake:malloc()");
		exit(1);
	}
	switch(ps->_Dir)
	{
	case UP:
		cur->x = ps->_Psnake->x;
		cur->y = ps->_Psnake->y - 1;
		break;
	case DOWN:
		cur->x = ps->_Psnake->x;
		cur->y = ps->_Psnake->y + 1;
		break;
	case LEFT:
		cur->x = ps->_Psnake->x - 2;
		cur->y = ps->_Psnake->y;
		break;
	case RIGHT:
		cur->x = ps->_Psnake->x + 2;
		cur->y = ps->_Psnake->y;
		break;
	}
	if(NextIsFood(ps,cur))
	{
		EatFood(ps,cur);
	}
	else
	{
		NotFood(ps, cur);
	}
	KillByWall(ps);
	KillBySelf(ps);
}

int NextIsFood(psnake ps,pSnakeNode pn)
{
	return (ps->_Pfood->x == pn->x && ps->_Pfood->y == pn->y);
}

void EatFood(psnake ps, pSnakeNode pn)
{
	ps->_Pfood->next = ps->_Psnake;
	ps->_Psnake = ps->_Pfood;
	pSnakeNode cur = ps->_Psnake;
	while(cur)
	{
		SetPos(cur->x,cur->y);
		wprintf(L"%c",BODY);
		cur = cur->next;
	}
	ps->_Score += ps->_FoodScore;
	free(pn);
    pn = NULL;
	CreateFood(ps);
}

void NotFood(psnake ps, pSnakeNode pn)
{
	pn->next = ps->_Psnake;
	ps->_Psnake = pn;
	pSnakeNode cur = ps->_Psnake;
	while(cur->next->next)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%c", BODY);
		cur = cur->next;
	}
	SetPos(cur->next->x, cur->next->y);
	printf("  ");
	free(cur->next);
	cur->next = NULL;
}

void WelcomeToGame()
{
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇"); 
	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(houtput, &CursorInfo);
	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(houtput, &CursorInfo);

	SetPos(40, 15);
	printf("欢迎来到贪吃蛇小游戏！");
	SetPos(40, 25);
	system("pause");
	system("cls");
	SetPos(25, 12);
	printf("用↑ . ↓ . ← . → 分别控制蛇的移动， F3为加速，F4为减速\n");
	SetPos(25, 13);
	printf("加速将能得到更高的分数。\n");
	SetPos(40, 25);
	system("pause");
	system("cls");
}

void CreatMap()
{
	int i = 0;
	SetPos(0,0);
	for(i = 0;i < 58; i = i + 2)
	{
		wprintf(L"%c", WALL);
	}
	SetPos(0, 26);
	for (i = 0; i < 58; i = i + 2)
	{
		wprintf(L"%c", WALL);
	}
	for (i = 0; i < 26; i++)
	{
		SetPos(0, i);
		wprintf(L"%c", WALL);
	}
	for (i = 0; i < 26; i++)
	{
		SetPos(56, i);
		wprintf(L"%c", WALL);
	}


}

void InitSnake(psnake ps)
{
	pSnakeNode cur = NULL;
	int i = 0;
	for(i = 0;i < 5;i++)
	{
			cur = (pSnakeNode)malloc(sizeof(SnakeNode));
			if (NULL == cur)
			{
				perror("InitSnake:malloc()");
				exit(1);
			}
			cur->next = NULL;
			cur->x = POS_X + i*2;
			cur->y = POS_Y;
			if (ps->_Psnake == NULL)
			{
				ps->_Psnake = cur;
			}
			else
			{
				cur->next = ps->_Psnake;
				ps->_Psnake = cur;
			}
	}
	cur = ps->_Psnake;
	while(cur)
	{
		SetPos(cur->x,cur->y);
		wprintf(L"%c",BODY);
		cur = cur->next;
	}
	ps->_Dir = RIGHT;
	ps->_FoodScore = 10;
	ps->_Score = 0;
	ps->_SleepTime = 200;
	ps->_State = OK;
}

void CreateFood(psnake ps)
{
	int x = 0;
	int y = 0;
	again:
	do
	{
		x = rand() % 53 + 2;
		y = rand() % 25 + 1;
	} while (x % 2 != 0);

	pSnakeNode cur = ps->_Psnake;
	while(cur)
	{
		if(cur->x == x && cur->y == y)
		{
			goto again;
		}
		cur = cur->next;
	}

	pSnakeNode pfood = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (NULL == pfood)
	{
		perror("CreateFood:malloc()");
		exit(1);
	}
	pfood->x = x;
	pfood->y = y;
	SetPos(x, y);
	wprintf(L"%c", FOOD);
	ps->_Pfood = pfood;
}

void PrintHelpInfo(psnake ps)
{
	SetPos(64, 10);
	printf("得分: %2d", ps->_Score);
	SetPos(64, 11);
	printf("每个食物得分: %2d", ps->_FoodScore);
	SetPos(64, 14);
	printf("游戏说明：");
	SetPos(64,15);
	printf("不能穿墙，不能咬到自己");
	SetPos(64, 16);
	printf("用↑ . ↓ . ← . → 分别控制蛇的移动");
	SetPos(64, 17);
	printf("F3为加速，F4为减速");
	SetPos(64, 18);
	printf("ESC:退出游戏。Space:暂停游戏。");
}

void pause()
{
	while(1)
	{
		Sleep(200);
		if(KEY_PRESS(VK_SPACE))
		{
			break;
		}
	}
}

void KillByWall(psnake ps)
{
	if(ps->_Psnake->x == 0 || ps->_Psnake->x == 56 || ps->_Psnake->y == 0 || ps->_Psnake->y == 25)
	{
		ps->_State = KILL_BY_WALL;
	}
}

void KillBySelf(psnake ps)
{
	pSnakeNode cur = ps->_Psnake->next;
	while(cur)
	{
		if((ps->_Psnake->x ==  cur->x) && (ps->_Psnake->y == cur->y))
		{
			ps->_State = KILL_BY_SELF;
			return;
		}
		cur = cur->next;
	}
}