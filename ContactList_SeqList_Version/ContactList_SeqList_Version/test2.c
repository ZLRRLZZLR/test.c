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


void test()
{
	contact con;
	InitContact(&con);
	AddContact(&con);
	ShowContact(&con);
	//ModifyContact(&con);
	DestroyContact(&con);
	//AddContact(&con);
	//DelContact(&con);
	//ShowContact(&con);
	/*FindContact(&con);*/
	//contactmenu();
}


int main()
{
	test();
	//int a = 0;
	//contact con;
	//InitContact(&con);
	//while(1)
	//{
	//	menu();
	//	scanf("%d", &a);
	//	if(0 == a)
	//	{
	//		break;
	//	}
	//	switch (a)
	//	{
	//	case 1:
	//		AddContact(&con);
	//		break;
	//	case 2:
	//		DelContact(&con);
	//		break;
	//	case 3:
	//		ShowContact(&con);
	//		break;
	//	case 4:
	//		FindContact(&con);
	//		break;
	//	case 5:
	//		ModifyContact(&con);
	//		break;
	//	case 6:

	//		break;
	//	default:
	//		puts("�����������������");
	//		break;
	//	}

	//}
	//DestroyContact(&con);

	return 0;
}
