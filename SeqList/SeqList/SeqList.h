#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


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
 //��ӡ����
 void SLPrint(SL* ps);

	// SLCheckCapacity
	// SLPushBack
	// SLPopBack
	// SLPushFront
	// SLPopFront
	// SLInsert
	// SLErase
	// SLFind