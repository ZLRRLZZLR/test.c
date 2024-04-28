#include"SListcontact.h"


SLTNode* SLTBuyNode()
{
	SLTNode* newnode = (SLTNode*)calloc(1, sizeof(SLTNode));
	if (NULL == newnode)
	{
		perror("calloc failed");
		exit(1);
	}
	memset(&(newnode->data), 0, sizeof(SLTNode));
	newnode->next = NULL;
	return newnode;
}

//ͷ������ɾ��/β������ɾ��

void SLTPushBack(SLTNode** pphead)
{
	assert(pphead);
	SLTNode* petail = NULL;
	if (NULL == *pphead)
	{
		*pphead = SLTBuyNode();
	}
	else
	{
		petail = *pphead;
		while (petail->next)
		{
			petail = petail->next;
		}
		petail->next = SLTBuyNode();
	}
	
}

