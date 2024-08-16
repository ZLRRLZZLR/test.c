#include"List.h"


//申请节点
LTNode* LTBuyNode(LTDataType x)
{
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("malloc fail!");
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
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("\n");
}

//初始化
void LTInit(LTNode** pphead)
{
	//给双向链表创建一个哨兵位
	*pphead = LTBuyNode(-1);
}
//LTNode* LTInit()
//{
//	LTNode* phead = LTBuyNode(-1);
//	return phead;
//}


//尾插
void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);

	//phead phead->prev newnode
	newnode->prev = phead->prev;
	newnode->next = phead;

	phead->prev->next = newnode;
	phead->prev = newnode;
}

//销毁
void LTDesTroy(LTNode* phead)
{
	assert(phead);

	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		LTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	//此时pcur指向phead，而phead还没有被销毁
	free(phead);
	phead = NULL;
}

//尾删
void LTPopBack(LTNode* phead)
{
	//链表必须有效且链表不能为空（只有一个哨兵位）
	assert(phead && phead->next != phead);

	LTNode* del = phead->prev;
	//phead del->prev del
	del->prev->next = phead;
	phead->prev = del->prev;

	//删除del节点
	free(del);
	del = NULL;
}

//头插
void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);

	//phead newnode phead->next
	newnode->next = phead->next;
	newnode->prev = phead;

	phead->next->prev = newnode;
	phead->next = newnode;
}

//头删
void LTPopFront(LTNode* phead)
{
	assert(phead && phead->next != phead);

	LTNode* del = phead->next;

	//phead del del->next
	phead->next = del->next;
	del->next->prev = phead;

	//删除del节点
	free(del);
	del = NULL;
}

//查找节点
LTNode* LTFind(LTNode* phead, LTDataType x)
{
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	//没有找到
	return NULL;
}

//在指定位置之后插入数据
void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);

	LTNode* newnode = LTBuyNode(x);
	//pos newnode pos->next
	newnode->next = pos->next;
	newnode->prev = pos;

	pos->next->prev = newnode;
	pos->next = newnode;
}

//指定位置删除
void LTErase(LTNode* pos)
{
	//pos理论上来说不能为phead，但是没有参数phead，无法增加校验
	assert(pos);
	//pos->prev pos pos->next
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;

	free(pos);
	pos = NULL;
}