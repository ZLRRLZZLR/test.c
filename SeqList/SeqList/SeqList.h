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

 //初始化和销毁

 void SLInit(SL* ps);
 void SLDestroy(SL* ps);
 //打印数组
 void SLPrint(SL* ps);

	// SLCheckCapacity
	// SLPushBack
	// SLPopBack
	// SLPushFront
	// SLPopFront
	// SLInsert
	// SLErase
	// SLFind