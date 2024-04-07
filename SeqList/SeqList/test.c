#include"SeqList.h"



void SeqList_test1(void)
{
	SL ps;
	SLInit(&ps);
	SLDestroy(&ps);
	SLPushFront(&ps, 2);
	SLPushFront(&ps, 1);
	SLPushBack(&ps, 3);
	SLPushBack(&ps, 4);
	SLPrint(ps);
	SLPopFront(&ps);
	SLPrint(ps);
	SLPopBack(&ps);
	SLPrint(ps);
}


void SeqList_test2(void)
{
	SL ps;
	SLInit(&ps);
	SLDestroy(&ps);
	SLPushFront(&ps, 2);
	SLPushFront(&ps, 1);
	SLPushBack(&ps, 3);
	SLPushBack(&ps, 4);
	SLPrint(ps);
	SLInsert(&ps, 0, 6);
	//SLPrint(ps);
	//SLInsert(&ps, 4, 8);
	//SLPrint(ps);
	//SLInsert(&ps, 3, 7);
	SLPrint(ps);
	SLErase(&ps, 0);
	SLPrint(ps);
	SLErase(&ps, 2);
	SLPrint(ps);
	SLErase(&ps, 1);
	SLPrint(ps);


}


void SeqList_test3(void)
{
	SL ps;
	SLInit(&ps);
	SLDestroy(&ps);
	SLPushFront(&ps, 2);
	SLPushFront(&ps, 1);
	SLPushBack(&ps, 3);
	SLPushBack(&ps, 4);
	SLPrint(ps);
	SLFind(ps, 4);
	int ret = SLFind(ps, 2);
	printf("%d", ret);
}


int main()
{

	//SeqList_test1();


	//SeqList_test2();


	SeqList_test3();

	return 0;
}