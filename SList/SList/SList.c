#include"SList.h"

void SLTPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;
	while(pcur)
	{
		printf("%d->",pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

SLTNode* SLTBuyNode(SLTDataType x)
{
	SLTNode*newnode = (SLTNode*)calloc(1, sizeof(SLTNode));
	if (NULL == newnode)
	{
		perror("calloc failed");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* petail = NULL;
	if(NULL == *pphead)
	{
		*pphead = SLTBuyNode(x);
	}
	else
	{
		petail = *pphead;
		while(petail->next)
		{
			petail = petail->next;
		}
		petail->next = SLTBuyNode(x);
	}
}

void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	if (NULL == *pphead)
	{
		*pphead = newnode;
	}
	else
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
}

void SLTPopBack(SLTNode** pphead)
{
	assert(pphead && *pphead);

	if ((*pphead)->next)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else 
	{

		SLTNode* prev = *pphead;
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			prev = ptail;
			ptail = ptail->next;
		}
		free(ptail);
		ptail = NULL;
		prev->next = NULL;
	}
}

void SLTPopFront(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* next = NULL;
	if((*pphead)->next)
	{
		next = (*pphead)->next;
		free(*pphead);
		*pphead = next;
	}
	else
	{
		next = (*pphead)->next;
		free((*pphead)->next);
		(*pphead)->next = next->next;
	}
}