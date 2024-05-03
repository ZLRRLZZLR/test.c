#include"snake.h"


void test()
{
	int ch = 0;
	srand((unsigned int)time(NULL));
	do
	{
		snake sk = { 0 };
		GameStart(&sk);
		GameRun(&sk);
		GameEnd(&sk);
		SetPos(25, 15);
		printf("您是否再来一局？(Y/N):");
		ch = getchar();
		while (getchar() != '\n');
	} while (ch == 'Y'|| ch == 'y');

}

//int main()
//{
//	setlocale(LC_ALL, "");
//	test();
//	SetPos(0, 27);
//	return 0;
//}