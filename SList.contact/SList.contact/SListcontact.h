#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define NAME_MAX 100
#define SEX_MAX 4
#define TEL_MAX 11
#define ADDR_MAX 100
//ǰ������

typedef struct SeqList contact;

//ͨѶ¼�޸Ĳ˵�
void contactmenu();
//�û�����

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

//����ռ�
SLTNode* SLTBuyNode(SLTDataType x);

//��ӡ
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

