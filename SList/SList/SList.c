#include"SList.h"

void SLTPrint(SLTNode* phead)
{
	assert(phead);
	SLTNode* pcur = phead;
	while(pcur)
	{
		printf("%d->",pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}