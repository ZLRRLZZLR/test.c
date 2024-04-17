#include"SList.h"
#include"vld.h"
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

//ͷ������ɾ��/β������ɾ��

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

	if ((*pphead)->next == NULL)
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

	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

//����
SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	assert(phead);
	SLTNode* pcur = phead;
	while(pcur)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}

//��ָ��λ��֮ǰ��������
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead && *pphead);
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	SLTNode* pcur = *pphead;
	if (pos == *pphead)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		while (pcur->next != pos)
		{
			pcur = pcur->next;
		}
		newnode->next = pcur->next;
		pcur->next = newnode;
	}

}

//��ָ��λ��֮���������
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode*  newnode = SLTBuyNode(x);
	newnode->next = pos->next;
	pos->next = newnode;

}

//ɾ��pos�ڵ�
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead && *pphead);
	assert(pos);
	SLTNode* pcur = *pphead;
	if(pos == *pphead)
	{
		SLTPopFront(pphead);
	}
	else
	{
		while (pcur->next != pos)
		{
			pcur = pcur->next;
		}
		pcur->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos && pos->next);
	SLTNode* pcur = pos->next->next;
	free(pos->next);
	pos->next = pcur;
}

//��������
void SListDesTroy(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* pcur = *pphead;
	SLTNode* prev = *pphead;
	while(pcur)
	{
		prev = pcur;
		pcur = pcur->next;
		free(prev);
	}
	*pphead = prev = pcur = NULL;
}