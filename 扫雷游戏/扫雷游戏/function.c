#define _CRT_SECURE_NO_WARNINGS
#include"statement.h"
void DisplayBoard(char board[ROWS][COLS],int row ,int col)//显示功能模块
{
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	
	}
   
}
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for(int i = 0; i < rows ;i++)//面表的创建后的初始化
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}

	}
}

void SetMine(char board[ROWS][COLS], int row, int col,int modle)
{
	switch (modle)
	{
	   case 1:
	  {
		int count = EASYCOUNT;
		while (count)
		{
			int x = rand() % row + 1;//生成随机坐标来在数组内随机布置雷
			int y = rand() % row + 1;
			if (board[x][y] == '0')//先判定，避免重复布置雷
			{
				board[x][y] = '1';
				count--;//成功布置雷后雷的总数减一
			}
		}
		break;
	  }
	    case 2:
	  {
		int count = MIDCOUNT;
		while (count)
		{
			int x = rand() % row + 1;
			int y = rand() % row + 1;
			if (board[x][y] == '0')
			{
				board[x][y] = '1';
				count--;
			}
		}
		break;
	  }
	   case 3:
	  {
		int count = DIFFICULTCOUNT;
		while (count)
		{
			int x = rand() % row + 1;
			int y = rand() % row + 1;
			if (board[x][y] == '0')
			{
				board[x][y] = '1';
				count--;
			}
		}
		break;
	  }
	}
}
int GiveMeCount(char mine[ROWS][COLS], int x, int y)//判断排查位置周围有多少的雷
{
	return mine[x - 1][y + 1] + mine[x][y + 1] + mine[x + 1][y + 1] +
		mine[x - 1][y] + mine[x + 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x][y + 1]
		- 8 * '0';
}
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col,int modle)
{

	int win = 0;//用来统计成功排查的个数
	while(win<row*col-modle)
	{
		DisplayBoard(show, ROW, COL);//显示游戏界面
		printf("请输入要排查的雷的坐标：>(,)\n");
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)//防止出现排查9*9显示界面外其他无用坐标
		{
			if (mine[x][y] == '1')
			{
				DisplayBoard(mine, ROW, COL);//显示雷的布置情况
				printf("很遗憾你被炸死了\n");
				break;
			}
			else
			{
				if (show[x][y] != '*')
					printf("该坐标已经被排查过了。,请重新输入。\n");
				else
				{
					show[x][y] = GiveMeCount(mine, x, y) + '0';
					win++;
				}
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入。\n");
		}
	}
	if(win == row * col - modle )
	{
		printf("恭喜你排雷成功\n");
	}
}