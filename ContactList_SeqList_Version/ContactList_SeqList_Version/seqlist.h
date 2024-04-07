#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include"vld.h"
#include"contact.h"

#define INIT_CAPACITY 4

typedef PeoInfo SLDataType;

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

