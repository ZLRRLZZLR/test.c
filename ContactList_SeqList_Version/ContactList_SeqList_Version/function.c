#include"seqlist.h"
void menu()
{
	puts("*********��ѡ����Ҫ���еĲ���*******");
	puts("*******1.����ͨѶ¼��ʷ��ϵ����Ϣ****");
	puts("*******2.���ͨѶ¼��ϵ����Ϣ*******");
	puts("*******3.ɾ��ͨѶ¼��ϵ����Ϣ*******");
	puts("*******4.չʾͨѶ¼��ϵ����Ϣ*******");
	puts("*******5.����ͨѶ¼��ϵ����Ϣ*******");
	puts("*******6.�޸�ͨѶ¼��ϵ����Ϣ*******");
	puts("*************0.�˳�����************");

}


int main()
{

	int a = 0;
	contact con;
	InitContact(&con);
	while (1)
	{
		menu();
		scanf("%d", &a);
		if (0 == a)
		{
			break;
		}
		switch (a)
		{
		case 1:
			LoadContact(&con);
			break;
		case 2:
			AddContact(&con);
			break;
		case 3:
			DelContact(&con);
			break;
		case 4:
			ShowContact(&con);
			break;
		case 5:
			FindContact(&con);
			break;
		case 6:
			ModifyContact(&con);
			break;

		default:
			puts("�����������������");
			break;
		}

	}
	DestroyContact(&con);

	return 0;
}
