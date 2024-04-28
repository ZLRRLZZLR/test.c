#pragma once

#define NAME_MAX 100
#define SEX_MAX 4
#define TEL_MAX 11
#define ADDR_MAX 100
//前置声明
typedef struct SListNode contact;

//用户数据
typedef struct PersonInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
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
SLTNode* SLTBuyNode();

//头部插入删除/尾部插入删除
void SLTPushBack(SLTNode** pphead);
void SLTPushFront(SLTNode** pphead, SLTDataType x);
void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);


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