#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

void SLInit(SL* ps)
{
	assert(ps);
	ps->arr = NULL;
	ps->size = ps->capacity = 0;

}

void SLDestroy(SL* ps)
{
	assert(ps);
	free(ps->arr);
	ps->arr = NULL;
	ps->size = ps->capacity = 0;

}

void SLPrint(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d",ps->arr[i]);
	}
}