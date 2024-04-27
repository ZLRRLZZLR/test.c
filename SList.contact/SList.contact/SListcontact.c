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

void AddContact(contact** con)
{
    SLTPushBack(con);
	contact* newnode = *con;
	while (newnode->next)
	{
		newnode = newnode->next;
	}
	puts("请输入联系人姓名：");
	scanf("%s", newnode->data.name);
	puts("请输入联系人性别：");
	scanf("%s", newnode->data.sex);
	puts("请输入联系人年龄：");
	scanf("%d", &(newnode->data.age));
	puts("请输入联系人电话：");
	scanf("%s", newnode->data.tel);
	puts("请输入联系人地址：");
	scanf("%s", newnode->data.addr);
	puts("添加操作结束");
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

