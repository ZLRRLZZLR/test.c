#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define INIT_CAPACITY 4
#define _CRT_SECURE_NO_WARNINGS


typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* arr;
	int size;
	int capacity;

}SL;


//��ʼ��������


void SLInit(SL* ps);
void SLDestroy(SL* ps);


//����ռ�
void SLCheckCapacity(SL* ps);


//ǰ���β��


void SLPushFront(SL* ps, SLDataType data);
void SLPushBack(SL* ps, SLDataType data);

//��ӡ����
void SLPrint(SL ps);


//ͷɾ��βɾ
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);


//ָ��λ�ò���ɾ��

void SLInsert(SL* ps, int pos, SLDataType data);
void SLErase(SL* ps, int pos);


//��������
int  SLFind(SL ps, SLDataType s);