#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define NAME_MAX 100
#define SEX_MAX 4
#define TEL_MAX 11
#define ADDR_MAX 100
//前置声明

typedef struct SeqList contact;

//通讯录修改菜单
void contactmenu();
//用户数据

typedef struct PersonInfo
{
	char name[NAME_MAX];
	char gender[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];

}PeoInfo;


typedef PeoInfo SLTDataType;

typedef struct SListNode
{

	SLTDataType data;
	struct SListNode* next;

}SLTNode;

//申请空间
SLTNode* SLTBuyNode(SLTDataType x);

//打印
void SLTPrint(SLTNode* phead);

//头部插入删除/尾部插入删除
void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPushFront(SLTNode** pphead, SLTDataType x);
void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);

//查找
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);
//在指定位置之前插入数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos);
//在指定位置之后插入数据
void SLTInsertAfter(SLTNode* pos, SLTDataType x);
//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos);
//销毁链表
void SListDesTroy(SLTNode** pphead);

