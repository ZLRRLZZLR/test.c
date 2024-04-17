#include"SList.h"

void test01(void)
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
	//SLTPrint(phead);
	//SLTPopBack(&phead);
	//SLTPrint(phead);
	//SLTPopBack(&phead);
	//SLTPrint(phead);
	//SLTPopBack(&phead);
	//SLTPrint(phead);
	//SLTPopBack(&phead);
	//SLTPrint(phead);
}

void test02(void)
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
	//SLTNode* ret = SLTFind(phead, 1);
	//if(ret == NULL)
	//{
	//	printf("找不到\n");
	//}
	//else
	//{
	//	printf("找到了\n");
	//}
	//SLTInsert(&phead, ret, 6);
	//SLTPrint(phead);
	//ret = SLTFind(phead, 4);
	//SLTInsert(&phead, ret, 9);
	//SLTPrint(phead);
	//SLTErase(&phead,ret);
	//SLTPrint(phead);
	//ret = SLTFind(phead, 4);
	//SLTErase(&phead, ret);
	//SLTPrint(phead);
	//ret = SLTFind(phead, 3);
	//SLTErase(&phead, ret);
	//SLTPrint(phead);
	//ret = SLTFind(phead, 2);
	//SLTErase(&phead, ret);
	//SLTPrint(phead);
	//SListDesTroy(&phead);
	//SLTPrint(phead);
	SLTPopBack(&phead);
	SLTPrint(phead);
}

void test03(void)
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
	//SLTNode* ret = SLTFind(phead, 1);
	//SLTInsertAfter(ret, 6);
	//SLTPrint(phead);
	//SLTPopBack(&phead);
	//SLTPrint(phead);
	//SLTNode* ret = SLTFind(phead, 2);
	//SLTEraseAfter(ret);
	//SLTPrint(phead);
	SListDesTroy(&phead);
}

int main()
{

	//test01();
	//test02();
	test03();

	return 0;
}
