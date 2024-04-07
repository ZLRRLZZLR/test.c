#include"seqlist.h"

//初始化
void SLInit(SL* ps)
{
	assert(ps);
	ps->arr = NULL;
	ps->size = ps->capacity = 0;


}
//销毁
void SLDestroy(SL* ps)
{
	assert(ps);
	if (ps->arr != NULL)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}


//申请空间
void SLCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? INIT_CAPACITY : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newcapacity * sizeof(SLDataType));
		if (NULL == tmp)
		{
			perror("realloc:");
			exit(1);
		}
		else
		{
			ps->arr = tmp;
			ps->capacity = newcapacity;
		}
	}
}


//前插
void SLPushFront(SL* ps, SLDataType data)
{
	assert(ps);
	SLCheckCapacity(ps);

	int i = 0;
	for (i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}

	ps->arr[0] = data;
	ps->size++;
}


//尾插
void SLPushBack(SL* ps, SLDataType data)
{
	assert(ps);
	SLCheckCapacity(ps);
	ps->arr[ps->size++] = data;

}


////打印数据
//void SLPrint(SL ps)
//{
//	int i = 0;
//	for (i = 0; i < ps.size; i++)
//	{
//			printf("%d ", ps.arr[i]);
//	}
//
//
//	printf("\n");
//}


//前删
void SLPopFront(SL* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;


}


//尾删
void SLPopBack(SL* ps)
{
	assert(ps);
	ps->size--;
}


//指定位置插入
void SLInsert(SL* ps, int pos, SLDataType data)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	SLCheckCapacity(ps);


	int i = 0;
	for (i = ps->size; i > pos; i--)
	{
		ps->arr[i] = ps->arr[i - 1];


	}
	ps->arr[pos] = data;
	ps->size++;


}


//指定位置删除
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);


	int i = 0;
	for (i = pos; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;


}


