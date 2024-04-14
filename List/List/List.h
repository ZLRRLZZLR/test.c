#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int LTDataType;

typedef struct ListNode
{
	LTDataType data;
	struct ListNode* prev;
	struct ListNode* next;

}LTNode;

//申请节点
LTNode* LTBuyNode(LTDataType x);

//打印
void LTPrint(LTNode* phead);

//初始化
//void LTInit(LTNode** pphead);
LTNode* LTInit();

//销毁
void LTDestroy(LTNode* phead);


//判断是否双向链表是否为空
bool LTEmpty(LTNode* phead);

//尾插
void LTPushBack(LTNode* phead, LTDataType x);

//尾删
void LTPopBack(LTNode* phead);

//前插
void LTPushFront(LTNode* phead, LTDataType x);

//前删
void LTPopFront(LTNode* phead);

//在pos位置之后插入数据
void LTInsert(LTNode* pos, LTDataType x);

//指定位置删除
void LTErase(LTNode* pos);

//查找节点
LTNode* LTFind(LTNode* phead, LTDataType x);