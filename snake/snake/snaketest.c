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
	short x = 0;
	short y = 0;
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
}