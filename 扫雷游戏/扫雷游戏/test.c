#define _CRT_SECURE_NO_WARNINGS
#include"statement.h"

void menu1()//菜单
{
	printf("----扫雷----\n");
	printf("****************\n");
	printf("****1.play***\n");
	printf("****************\n");
	printf("****************\n");
	printf("****0.exit*****\n");
	printf("****************\n");
}
void menu2()
{
	printf("请选择游戏模式");
	printf("****************\n");
	printf("*****1.easy****\n");
	printf("****************\n");
	printf("*****2.mid*****\n");
	printf("****************\n");
	printf("*****3.diffcult*****\n");
	printf("****************\n");

}
void game()
{

	char mine[ROWS][COLS] = { 0 };//布置雷
	char show[ROWS][COLS] = { 0 };//展示雷的游戏界面

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');//初始化


	//DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show,ROW,COL);//展示面板
	int modle = 0;
	menu2();//选择游戏难度
	scanf("%d", &modle);
	SetMine(mine, ROW, COL,modle);

	//DisplayBoard(mine, ROW, COL);
	switch (modle)
	{
	  case 1:
	{
		  FindMine(mine, show, ROW, COL, EASYCOUNT);
		  break; 
	}
	  case 2:
	  {
		  FindMine(mine, show, ROW, COL, MIDCOUNT);
		  break;
	  }
	  case 3:
	  {
		  FindMine(mine, show, ROW, COL, DIFFICULTCOUNT);
		  break;

	  }

	}
}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do 
	{

		menu1();
		scanf("%d", &input);
		switch(input)
		{
		case 1 :
		{
			game();
			break;
	     }
		case 0 :
			break;
		default:
			printf("输入错误，请重新输入。");
		} 

	} while (input);

	return 0;
}
