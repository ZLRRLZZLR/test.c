#include"List.h"

void Listtest01(void)
{
	LTNode* phead;
	LTInit(&phead);
	int flag = LTEmpty(phead);
	if(flag)
	{
		puts("双向链表为空");
	}
	else
	{
		puts("双向链表不为空");
	}
	LTPushBack(phead,1);
	LTPushBack(phead,2);
	LTPushBack(phead,3);
	LTPushBack(phead,4);
	LTPrint(phead);
	//LTDestroy(phead);
	//phead = NULL;
	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	////LTPrint(phead);
	//LTPopBack(phead);
}
void Listtest02(void)
{
	LTNode* phead;
	LTInit(&phead);
	LTPrint(phead);
	LTPushFront(phead, 1);
	LTPrint(phead);
	LTPushFront(phead, 2);
	LTPrint(phead);
	LTPushFront(phead, 3);
	LTPrint(phead);
	LTPushFront(phead, 4);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);

}


void Listtest03(void)
{
	LTNode* phead;
	LTInit(&phead);
	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
}

void Listtest04(void)
{
	LTNode* phead;
	LTInit(&phead);
	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	//LTNode* pos = LTFind(phead, 1);
	//if(pos != NULL)
	//{
	//	puts("找到了");
	//}
	//else
	//{
	//	puts("找不到");
	//}
	LTNode* pos = LTFind(phead, 4);;
	//LTInsert(pos, 5);
	//LTPrint(phead);
	// pos = LTFind(phead, 2);
	//LTInsert(pos, 6);
	//LTPrint(phead);
	// pos = LTFind(phead, 3);
	//LTInsert(pos, 7);
	//LTPrint(phead);
	
	 LTErase(pos);
	LTPrint(phead);

}

void Listtest05(void)
{
	LTNode* phead = LTInit();
	LTInit(&phead);
	//LTPushBack(phead, 1);
	//LTPushBack(phead, 2);
	//LTPushBack(phead, 3);
	//LTPushBack(phead, 4);
	//LTNode* pos = LTFind(phead, 4);
	//LTErase(pos);
	//LTPrint(phead);
	//LTPushBack(phead, 1);
	//LTPushBack(phead, 2);
	//LTPushBack(phead, 3);
	//LTPushBack(phead, 4);
	//LTPrint(phead);
	//LTPopBack(phead);
	//LTPopBack(phead);
	//LTPopBack(phead);
	//LTPrint(phead);
	//LTPopBack(phead);
	//LTPrint(phead);
	LTPushFront(phead, 1);
	LTPrint(phead);
	LTPushFront(phead, 2);
	LTPrint(phead);
	LTPushFront(phead, 3);
	LTPrint(phead);
	LTPushFront(phead, 4);
	LTPrint(phead);


}


int main()
{
	//Listtest01();
	//Listtest02();
	//Listtest03();
	//Listtest04();
	Listtest05();
	return 0;
}