#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define ARR_MAX 10000
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include"vld.h"
#include"Static_contact.h"

typedef PeoInfo SLDataType;

typedef struct SeqList
{
	SLDataType arr[ARR_MAX];
	int size;

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
