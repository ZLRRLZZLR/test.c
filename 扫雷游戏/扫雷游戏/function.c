#define _CRT_SECURE_NO_WARNINGS
#include"statement.h"
void DisplayBoard(char board[ROWS][COLS],int row ,int col)//��ʾ����ģ��
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
	for(int i = 0; i < rows ;i++)//���Ĵ�����ĳ�ʼ��
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
			int x = rand() % row + 1;//������������������������������
			int y = rand() % row + 1;
			if (board[x][y] == '0')//���ж��������ظ�������
			{
				board[x][y] = '1';
				count--;//�ɹ������׺��׵�������һ
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
int GiveMeCount(char mine[ROWS][COLS], int x, int y)//�ж��Ų�λ����Χ�ж��ٵ���
{
	return mine[x - 1][y + 1] + mine[x][y + 1] + mine[x + 1][y + 1] +
		mine[x - 1][y] + mine[x + 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x][y + 1]
		- 8 * '0';
}
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col,int modle)
{

	int win = 0;//����ͳ�Ƴɹ��Ų�ĸ���
	while(win<row*col-modle)
	{
		DisplayBoard(show, ROW, COL);//��ʾ��Ϸ����
		printf("������Ҫ�Ų���׵����꣺>(,)\n");
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)//��ֹ�����Ų�9*9��ʾ������������������
		{
			if (mine[x][y] == '1')
			{
				DisplayBoard(mine, ROW, COL);//��ʾ�׵Ĳ������
				printf("���ź��㱻ը����\n");
				break;
			}
			else
			{
				if (show[x][y] != '*')
					printf("�������Ѿ����Ų���ˡ�,���������롣\n");
				else
				{
					show[x][y] = GiveMeCount(mine, x, y) + '0';
					win++;
				}
			}
		}
		else
		{
			printf("��������Ƿ������������롣\n");
		}
	}
	if(win == row * col - modle )
	{
		printf("��ϲ�����׳ɹ�\n");
	}
}