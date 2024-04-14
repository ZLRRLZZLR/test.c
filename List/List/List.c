#include"List.h"

//申请节点
LTNode* LTBuyNode(LTDataType x)
{
	LTNode* node = (LTNode*)calloc(1,sizeof(LTNode));
	if (NULL == node)
	{
		perror("calloc failed!");
		exit(1);
	}
	node->data = x;
	node->next = node->prev = node;
	return node;
}

//判断是否双向链表是否为空
bool LTEmpty(LTNode* phead)
{
	assert(phead);
	if(phead->next == phead)
	{
		return true;
	}
	return false;
}

//打印
void LTPrint(LTNode* phead)
{
	assert(phead);
	LTNode* pcur = phead->next;
	while(pcur != phead)
	{
		printf("%d->",pcur->data);
		pcur = pcur->next;
	}
	puts("NULL");
}

//初始化
void LTInit(LTNode** pphead)
{
	assert(pphead);
	*pphead = LTBuyNode(-1);
}
//LTNode* LTInit()
//{
//
//	LTNode*phead = LTBuyNode(-1);
//	return phead;
//}


//尾插
void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	newnode->prev = phead->prev;
	newnode->next = phead;

	phead->prev->next = newnode;
	phead->prev = newnode;

}

//销毁
void LTDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		LTNode* ret = pcur->next;
		free(pcur);
		pcur = ret;
	}
	free(pcur);
	pcur = phead = NULL;

}

//尾删
void LTPopBack(LTNode* phead)
{
	assert(phead && phead->next != phead);
	LTNode* del = phead->prev;
	del->prev->next = phead;
	phead->prev = del->prev;
	free(del);
	del = phead = NULL;

}

//前插
void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	newnode->next = phead->next;
	newnode->prev = phead;
	phead->next->prev = newnode;
	phead->next = newnode;
		
}

//前删
void LTPopFront(LTNode* phead)
{
	assert(phead && phead->next != phead);
	LTNode* del = phead->next;
	phead->next = del->next;
	del->next->prev = phead;

	free(del);
	del = phead = NULL;
}

//查找节点
LTNode* LTFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* pcur = phead->next;
	while(pcur != phead)
	{
		if(x == pcur->data)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}

//在pos位置之后插入数据
void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newnode = LTBuyNode(x);
	newnode->next = pos->next;
	newnode->prev = pos;

	pos->next->prev = newnode;
	pos->next = newnode;
}

//指定位置删除
void LTErase(LTNode* pos)
{
	assert(pos && pos->next != pos);
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;

	free(pos);
	pos = NULL;
}