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


//初始化和销毁


void SLInit(SL* ps);
void SLDestroy(SL* ps);


//申请空间
void SLCheckCapacity(SL* ps);


//前插和尾插


void SLPushFront(SL* ps, SLDataType data);
void SLPushBack(SL* ps, SLDataType data);

//打印数组
void SLPrint(SL ps);


//头删和尾删
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);


//指定位置插入删除

void SLInsert(SL* ps, int pos, SLDataType data);
void SLErase(SL* ps, int pos);


//查找数据
int  SLFind(SL ps, SLDataType s);