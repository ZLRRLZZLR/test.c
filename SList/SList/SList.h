#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;


void SLTPrint(SLTNode* phead);

//ͷ������ɾ��/β������ɾ��
void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPushFront(SLTNode** pphead, SLTDataType x);
void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);

//����
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);
//��ָ��λ��֮ǰ��������
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//ɾ��pos�ڵ�
void SLTErase(SLTNode** pphead, SLTNode* pos);
//��ָ��λ��֮���������
void SLTInsertAfter(SLTNode* pos, SLTDataType x);
//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos);
//��������
void SListDesTroy(SLTNode** pphead);