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

//����ڵ�
LTNode* LTBuyNode(LTDataType x);

//��ӡ
void LTPrint(LTNode* phead);

//��ʼ��
//void LTInit(LTNode** pphead);
LTNode* LTInit();

//����
void LTDestroy(LTNode* phead);


//�ж��Ƿ�˫�������Ƿ�Ϊ��
bool LTEmpty(LTNode* phead);

//β��
void LTPushBack(LTNode* phead, LTDataType x);

//βɾ
void LTPopBack(LTNode* phead);

//ǰ��
void LTPushFront(LTNode* phead, LTDataType x);

//ǰɾ
void LTPopFront(LTNode* phead);

//��posλ��֮���������
void LTInsert(LTNode* pos, LTDataType x);

//ָ��λ��ɾ��
void LTErase(LTNode* pos);

//���ҽڵ�
LTNode* LTFind(LTNode* phead, LTDataType x);