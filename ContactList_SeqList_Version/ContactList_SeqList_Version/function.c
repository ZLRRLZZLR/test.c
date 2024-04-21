#include"seqlist.h"
void menu()
{
	puts("*********请选择您要进行的操作*******");
	puts("*******1.加载通讯录历史联系人信息****");
	puts("*******2.添加通讯录联系人信息*******");
	puts("*******3.删除通讯录联系人信息*******");
	puts("*******4.展示通讯录联系人信息*******");
	puts("*******5.查找通讯录联系人信息*******");
	puts("*******6.修改通讯录联系人信息*******");
	puts("*************0.退出程序************");

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
			puts("输入错误请重新输入");
			break;
		}

	}
	DestroyContact(&con);

	return 0;
}
