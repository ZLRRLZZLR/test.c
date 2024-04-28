#include"SListcontact.h"

int main()
{

	int a = 0;
	contact* con;
	InitContact(&con);
	while (1)
	{
		menu();
		scanf("%d", &a);
		if (0 == a)
		{
			puts("退出成功！");
			break;
		}
		switch (a)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			ShowContact(&con);
			break;
		case 4:
			FindContact(&con);
			break;
		case 5:
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
