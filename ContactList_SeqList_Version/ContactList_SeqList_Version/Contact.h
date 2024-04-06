#pragma once

#define NAME_MAX 100
#define SEX_MAX 4
#define TEL_MAX 11
#define ADDR_MAX 100

//前置声明

typedef struct SeqList contact;


//用户数据

typedef struct PersonInfo
{
	char name[NAME_MAX];
	char gender[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];

}PeoInfo;

//根据名字查找
int FindByName(contact* con, char* Name);

//加载通讯录信息
void LoadContact(contact* con);

//初始化通讯录

void InitContact(contact* con);

//添加通讯录数据

void AddContact(contact* con);

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