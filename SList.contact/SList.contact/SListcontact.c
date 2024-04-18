#include"SListcontact.h"

void contactmenu()
{
	puts("***********************");
	puts("******1.联系人姓名******");
	puts("******2.联系人性别******");
	puts("******3.联系人年龄******");
	puts("******4.联系人电话******");
	puts("******5.联系人地址******");
	puts("********0.退出*********");
	puts("***********************");
}



//初始化通讯录
void InitContact(contact** con)
{
	*con = NULL;
}


//添加通讯录数据

void AddContact(contact* con)
{
	assert(con);
	int num = 0;
	puts("请输入要添加的联系人信息");
	scanf("%d", &num);
	switch(num)
	{
	case 1:
		scanf("%s", con->data.name);
		break;
	case 2:
		scanf("%s", con->data.sex);
		break;
	case 3:
		scanf("%s", &con->data.age);
		break;
	case 4:
		scanf("%s", con->data.tel);
		break;
	case 5:
		scanf("%s", con->data.addr);
		break;
	default:
		puts("操作结束结束");
	}


}

//删除通讯录数据

void DelContact(contact* con);

//展示通讯录数据

void ShowContact(contact* con);

//查找通讯录数据

void FindContact(contact* con);

//修改通讯录数据

void ModifyContact(contact* con);

//销毁通讯录数据

void DestroyContact(contact* con);


//根据名字查找
int FindByName(contact* con, char* Name);

//加载通讯录信息
void LoadContact(contact* con);

