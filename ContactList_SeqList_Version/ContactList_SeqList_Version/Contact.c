#include"seqlist.h"
void contactmenu()
{
	puts("****请选择您要修改的内容****");
	puts("*******1.联系人姓名*******");
	puts("*******2.联系人性别*******");
	puts("*******3.联系人年龄*******");
	puts("*******4.联系人电话*******");
	puts("*******5.联系人地址*******");
	puts("*******0.退出修改 ********");

}

//根据名字查找
int FindByName(contact* con, char* Name)
{
	assert(con);
	assert(Name);
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->arr[i].name, Name))
		{
			return i;
		}
	}
	return EOF;
}


//初始化通讯录

void InitContact(contact* con)
{
	assert(con);
	SLInit(con);
}

//加载通讯录信息
void LoadContact(contact* con)
{
	assert(con);
	FILE* pf = fopen("contact.txt","rb");
	if(NULL == pf)
	{
		perror("fopen:");
		exit(1);
	}
	PeoInfo info;
	while(fread(&info,sizeof(info),1,pf))
	{
		SLPushBack(con, info);
	}
	puts("通讯录历史数据加载成功！");
}

//添加通讯录数据

void AddContact(contact* con)
{
	assert(con);
	PeoInfo peniof;
	puts("请输入要添加的联系人姓名:");
	scanf("%s", peniof.name);
	int find = FindByName(con, peniof.name);
	if(find >= 0)
	{
		puts("您要添加的联系人信息已存在，无法重复添加");
		return;
	}
	puts("请输入要添加的联系人的性别:");
	scanf("%s", peniof.gender);
	puts("请输入要添加的联系人的年龄:");
	scanf("%d", &peniof.age);
	puts("请输入要添加的联系人的电话:");
	scanf("%s", peniof.tel);
	puts("请输入要添加的联系人的地址:");
	scanf("%s", peniof.addr);

	SLPushFront(con, peniof);
	puts("添加成功！");
}


//删除通讯录数据

void DelContact(contact* con)
{
	assert(con);
	char name[NAME_MAX];
	puts("请输入要删除的联系人的姓名");
	scanf("%s",&name);
	int find = FindByName(con, name);
	if (find < 0)
	{
		puts("您要添加的联系人信息不存在，删除失败");
		return;
	}
	SLErase(con, find);
	puts("删除成功！");

}

//展示通讯录数据

void ShowContact(contact* con)
{
	assert(con);
	if(0 == con->size)
	{
		puts("通讯录中未存储任何信息，无法展示");
		return;
	}
	int i = 0;
	for(i = 0;i < con->size;i++)
	{
		printf("联系人%d\n", i + 1);
		printf("姓名：%-s\n", con->arr[i].name);
		printf("性别：%-s\n", con->arr[i].gender);
		printf("年龄：%-d\n", con->arr[i].age);
		printf("电话：%-s\n", con->arr[i].tel);
		printf("地址：%-s\n", con->arr[i].addr);
	}
}

//查找通讯录数据

void FindContact(contact* con)
{
	assert(con);
	char name[NAME_MAX];
	puts("请输入要查找的联系人的姓名");
	scanf("%s", &name);
	int find = FindByName(con, name);
	if (find < 0)
	{
		puts("您要查找的联系人信息不存在，查找失败！");
		return;
	}
	puts("查找成功！联系人信息如下：");
	printf("联系人%d\n", find+1);
	printf("姓名：%-s\n", con->arr[find].name);
	printf("性别：%-s\n", con->arr[find].gender);
	printf("年龄：%-d\n", con->arr[find].age);
	printf("电话：%-s\n", con->arr[find].tel);
	printf("地址：%-s\n", con->arr[find].addr);
}

//修改通讯录数据

void ModifyContact(contact* con)
{
	assert(con);
	char name[NAME_MAX];
	puts("请输入要修改的联系人的姓名");
	scanf("%s", &name);
	int find = FindByName(con, name);
	if (find < 0)
	{
		puts("您要添加的联系人信息不存在，修改失败");
		return;
	}
	int num = 0;
	while (1)
	{
		contactmenu();
		scanf("%d", &num);
		if (0 == num)
		{
			puts("修改结束");
			break;
		}
		puts("修改开始！");
		switch (num)
		{
		case 1:
			scanf("%s", con->arr[find].name);
			puts("修改成功");
			break;
		case 2:
			scanf("%s", con->arr[find].gender);
			puts("修改成功");
			break;
		case 3:
			scanf("%d", &con->arr[find].age);
			puts("修改成功");
			break;
		case 4:
			scanf("%s", con->arr[find].tel);
			puts("修改成功");
			break;
		case 5:
			scanf("%s", con->arr[find].addr);
			puts("修改成功");
			break;
		default:
			puts("输入错误请重新输入");
			break;
		}
	}
}

//销毁通讯录数据

void DestroyContact(contact* con)
{
	assert(con);
	SLDestroy(con);
	puts("销毁成功！");
}