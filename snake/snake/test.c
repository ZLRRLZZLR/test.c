#include"snake.h"


void test()
{
	int ch = 0;
	srand((unsigned int)time(NULL));//通过rand产生随机坐标来产生随机食物的效果
	do
	{
		system("cls");
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

int main()
{
	setlocale(LC_ALL, "");//修改当前地区为本地模式，为了支持中文宽字符及特殊字符的打印
	test();//测试逻辑
	SetPos(0, 27);//将光标移动至地图下方，不会破坏地图
	return 0;
}