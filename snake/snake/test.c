#include"snake.h"


void test()
{
	int ch = 0;
	srand((unsigned int)time(NULL));//ͨ��rand��������������������ʳ���Ч��
	do
	{
		system("cls");
		snake sk = { 0 };
		GameStart(&sk);
		GameRun(&sk);
		GameEnd(&sk);
		SetPos(25, 15);
		printf("���Ƿ�����һ�֣�(Y/N):");
		ch = getchar();
		while (getchar() != '\n');
	} while (ch == 'Y'|| ch == 'y');

}

int main()
{
	setlocale(LC_ALL, "");//�޸ĵ�ǰ����Ϊ����ģʽ��Ϊ��֧�����Ŀ��ַ��������ַ��Ĵ�ӡ
	test();//�����߼�
	SetPos(0, 27);//������ƶ�����ͼ�·��������ƻ���ͼ
	return 0;
}