#define _CRT_SECURE_NO_WARNINGS
#include"statement.h"

void menu1()//�˵�
{
	printf("----ɨ��----\n");
	printf("****************\n");
	printf("****1.play***\n");
	printf("****************\n");
	printf("****************\n");
	printf("****0.exit*****\n");
	printf("****************\n");
}
void menu2()
{
	printf("��ѡ����Ϸģʽ");
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

	char mine[ROWS][COLS] = { 0 };//������
	char show[ROWS][COLS] = { 0 };//չʾ�׵���Ϸ����

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');//��ʼ��


	//DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show,ROW,COL);//չʾ���
	int modle = 0;
	menu2();//ѡ����Ϸ�Ѷ�
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
			printf("����������������롣");
		} 

	} while (input);

	return 0;
}
