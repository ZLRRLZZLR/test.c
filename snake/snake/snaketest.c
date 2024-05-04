#include"snake.h"

//设置光标的坐标

void SetPos(short x, short y)
{
	COORD pos = { x,y };
	HANDLE houtput = NULL;

	//获取标准输出的句柄(用来标识不同设备的数值)

	houtput = GetStdHandle(STD_OUTPUT_HANDLE);

	//设置标准输出上光标的位置为pos

	SetConsoleCursorPosition(houtput, pos);

}

void GameStart(psnake ps)
{
	WelcomeToGame();//设置窗口名称大小、隐藏光标，打印欢迎界面
	CreatMap();//打印欢迎界面
	InitSnake(ps);//初始化蛇及其相关信息
	CreateFood(ps);//创造第一个食物

}

void GameRun(psnake ps)
{
	do
	{
		//打印右侧帮助信息
		PrintHelpInfo(ps);
		if (KEY_PRESS(VK_UP) && ps->_Dir != DOWN)//前进方向为上时，不能向下转
		{
			ps->_Dir = UP;//更新蛇的方向
		}
		else if (KEY_PRESS(VK_DOWN) && ps->_Dir != UP)//前进方向为下时，不能向上转
		{
			ps->_Dir = DOWN;
		}
		else if (KEY_PRESS(VK_LEFT) && ps->_Dir != RIGHT)//前进方向为左时，不能向右转
		{
			ps->_Dir = LEFT;
		}

		else if (KEY_PRESS(VK_RIGHT) && ps->_Dir != LEFT)//前进方向为右时，不能向左转
		{
			ps->_Dir = RIGHT;
		}
		else if (KEY_PRESS(VK_SPACE))//检测是否按过空格，按过则游戏暂停
		{
			pause();
		}
		else if (KEY_PRESS(VK_F3))//检测是否按过F3，按过则游戏加速
		{
			if (ps->_SleepTime >= 50)
			{
				ps->_SleepTime -= 30;//游戏加速就是休眠时间变短
				ps->_FoodScore += 2;//游戏加速，每个食物能获得分数上涨
			}
		}
		else if (KEY_PRESS(VK_F4))//检测是否按过F4，按过则游戏减速
		{
			if (ps->_SleepTime < 350)
			{
				ps->_SleepTime += 30;//游戏减速就是休眠时间变长
				ps->_FoodScore -= 2;//游戏减速，每个食物能获得分数下降
			}
			if (ps->_SleepTime == 350)//蛇能减到的最低速度
			{
				ps->_FoodScore = 1;
			}
		}
		else if (KEY_PRESS(VK_ESCAPE))//检测是否按过ESC键，按过则游戏正常结束
		{
			ps->_State = END_NORMAL;//更新蛇的状态
			break;
		}
		//蛇每次⼀定之间要休眠的时间，时间短，蛇移动速度就快
		Sleep(ps->_SleepTime);
		SnakeMove(ps);//蛇移动一步
	} while (ps->_State == OK);//判断蛇的状态是否正常进行游戏
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
	//释放蛇身的节点
	while (cur)
	{
		pSnakeNode next = cur->next;
		free(cur);
		cur = next;
	}

}

void SnakeMove(psnake ps)
{
	//创建下⼀个节点
	pSnakeNode cur = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (NULL == cur)
	{
		perror("InitSnake:malloc()");
		exit(1);
	}
	//确定下一个节点的坐标，下一个节点的坐标根据，蛇头的坐标和方向确定
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

	//如果下一个位置就是⻝物
	if(NextIsFood(ps,cur))
	{
		EatFood(ps,cur);
	}
	else//如果没有⻝物
	{
		NotFood(ps, cur);
	}
	KillByWall(ps);
	KillBySelf(ps);
}

//pSnakeNode pn 是下一个节点的地址
//pSnake ps 维护蛇的指针
int NextIsFood(psnake ps,pSnakeNode pn)
{
	return (ps->_Pfood->x == pn->x && ps->_Pfood->y == pn->y);
}

//pSnakeNode pn 是下一个节点的地址
//pSnake ps 维护蛇的指针
void EatFood(psnake ps, pSnakeNode pn)
{
	//头插法：将属于食物的节点插入到原链表中，作为新的蛇头
	ps->_Pfood->next = ps->_Psnake;
	ps->_Psnake = ps->_Pfood;
	pSnakeNode cur = ps->_Psnake;

	//打印蛇
	while(cur)
	{
		SetPos(cur->x,cur->y);
		wprintf(L"%c",BODY);
		cur = cur->next;
	}
	ps->_Score += ps->_FoodScore;
	free(pn);
    pn = NULL;
	CreateFood(ps);//吃掉食物后再创建一个食物
}

//pSnakeNode pn 是下一节点的地址
//pSnake ps 维护蛇的指针
void NotFood(psnake ps, pSnakeNode pn)
{
	//头插法：将创建的节点插入到原链表中，作为新蛇头   
	pn->next = ps->_Psnake;
	ps->_Psnake = pn;
	pSnakeNode cur = ps->_Psnake;
	//打印蛇
	while(cur->next->next)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%c", BODY);
		cur = cur->next;
	}

	//最后⼀个位置打印空格，然后释放节点
	SetPos(cur->next->x, cur->next->y);
	printf("  ");
	free(cur->next);
	cur->next = NULL;
}

void WelcomeToGame()
{
	//设置控制台窗口的大小，30行，100列
    //mode为DOS命令
	system("mode con cols=100 lines=30");
	//设置cmd窗口名称
	system("title 贪吃蛇");
	//获取标准输出的句柄(用来标识不同设备的数值)
	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	//影藏光标操作
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(houtput, &CursorInfo);//获取控制台光标信息
	CursorInfo.bVisible = false;//隐藏控制台光标
	SetConsoleCursorInfo(houtput, &CursorInfo);//设置控制台光标状态
	//SetPos调整光标位置
	SetPos(40, 15);
	printf("欢迎来到贪吃蛇小游戏！");
	SetPos(40, 25);//让按任意键继续的出现的位置好看点
	system("pause");
	system("cls");
	SetPos(25, 12);
	printf("用↑ . ↓ . ← . → 分别控制蛇的移动， F3为加速，F4为减速\n");
	SetPos(25, 13);
	printf("加速将能得到更高的分数。\n");
	SetPos(40, 25);//让按任意键继续的出现的位置好看点
	system("pause");
	system("cls");
}

void CreatMap()
{
	int i = 0;
	SetPos(0,0);
	//宽字符一块墙体站X两个单位大小
	//上(0,0)-(56, 0)
	for(i = 0;i < 58; i = i + 2)
	{
		wprintf(L"%c", WALL);
	}
	SetPos(0, 26);
	//下(0,26)-(56, 26)
	for (i = 0; i < 58; i = i + 2)
	{
		wprintf(L"%c", WALL);
	}
	//左
    //x是0，y从0开始增⻓
	for (i = 0; i < 26; i++)
	{
		SetPos(0, i);
		wprintf(L"%c", WALL);
	}
	//x是56，y从0开始增⻓
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
	//创建蛇身节点，并初始化坐标
    //头插法：创建新的头插入原链表中，并将新节点作为新蛇头
	for(i = 0;i < 5;i++)
	{

		//创建蛇身的节点
			cur = (pSnakeNode)malloc(sizeof(SnakeNode));
			if (NULL == cur)
			{
				perror("InitSnake:malloc()");
				exit(1);
			}

			//设置坐标

			cur->next = NULL;
			cur->x = POS_X + i*2;
			cur->y = POS_Y;

			//头插法

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

	//打印蛇的身体：改变光标位置，在对应光标位置打印身体字符

	cur = ps->_Psnake;
	while(cur)
	{
		SetPos(cur->x,cur->y);
		wprintf(L"%c",BODY);
		cur = cur->next;
	}

	//初始化贪吃蛇数据

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

	//产生的x坐标应该是2的倍数，这样才可能和蛇头坐标对⻬

	do
	{
		x = rand() % 53 + 2;
		y = rand() % 25 + 1;
	} while (x % 2 != 0);

	pSnakeNode cur = ps->_Psnake; // 获取指向蛇头的指针

	//⻝物不能和蛇身冲突

	while(cur)
	{
		if(cur->x == x && cur->y == y)
		{
			goto again;
		}
		cur = cur->next;
	}

	pSnakeNode pfood = (pSnakeNode)malloc(sizeof(SnakeNode));//创建⻝物
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
	//打印提示信息

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

void pause()//按一次空格，游戏暂停
{
	while(1)//通过死循环的休眠程序达到暂停的效果
	{
		Sleep(200);
		if(KEY_PRESS(VK_SPACE))
		{
			break;///再按一次空格，游戏继续
		}
	}
}
//pSnake ps 维护蛇的指针
void KillByWall(psnake ps)
{
	if(ps->_Psnake->x == 0 || ps->_Psnake->x == 56 || ps->_Psnake->y == 0 || ps->_Psnake->y == 25)
	{
		ps->_State = KILL_BY_WALL;
	}
}

//pSnake ps 维护蛇的指针
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