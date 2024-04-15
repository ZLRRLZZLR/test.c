#include"SList.h"

void test(void)
{
	SLTNode* phead = NULL;
	SLTPrint(phead);
	SLTPushFront(&phead, 1);
	SLTPrint(phead);
	SLTPushFront(&phead, 2);
	SLTPrint(phead);
	SLTPushFront(&phead, 3);
	SLTPrint(phead);
	SLTPushFront(&phead, 4);
	SLTPrint(phead);
	SLTPopFront(&phead);
	SLTPrint(phead);
	SLTPopFront(&phead);
	SLTPrint(phead);
	SLTPopFront(&phead);
	SLTPrint(phead);
	SLTPopBack(&phead);
	SLTPrint(phead);
	SLTPopBack(&phead);
	SLTPrint(phead);
	//SLTPopBack(&phead);
	//SLTPrint(phead);
	//SLTPopBack(&phead);
	//SLTPrint(phead);
	//SLTPopBack(&phead);
	//SLTPrint(phead);
}



int main()
{

	test();

	return 0;
}
