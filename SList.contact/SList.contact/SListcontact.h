#pragma once
#include"Slist.h"
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//#include"vld.h"
//contact.h

void menu();
void contactmenu();
//根据名字查找
SLTNode* FindByName(SLTNode* phead, char* Name);
//初始化通讯录
void InitContact(contact** con);

//添加通讯录数据
void AddContact(contact** con);

//删除通讯录数据
void DelContact(contact** con);

//展示通讯录数据
void ShowContact(contact* con);

//查找通讯录数据
void FindContact(contact* con);

//修改通讯录数据
void ModifyContact(contact** con);

//销毁通讯录数据
void DestroyContact(contact** con);



