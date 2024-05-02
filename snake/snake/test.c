#include"snake.h"


void test()
{
	snake sk = { 0 };
	GameStart(&sk);
	//GameRun();
	//GameEnd();



}


int main()
{
	setlocale(LC_ALL, "");
	srand((unsigned int)time(NULL));
	test();
	return 0;
}