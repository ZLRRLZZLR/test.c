#include"Static_seqlist.h"



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
			puts("选择错误，请重新选择！");
			break;
		}

	}
	DestroyContact(&con);

	return 0;
}