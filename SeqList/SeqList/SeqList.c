#include"SeqList.h"


//��ʼ��
void SLInit(SL* ps)
{
	assert(ps);
	ps->arr = NULL;
	ps->size = ps->capacity = 0;

}
//����
void SLDestroy(SL* ps)
{
	assert(ps);
	free(ps->arr);
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}


//����ռ�
void SLCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity = 0 ? INIT_CAPACITY : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
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


//ǰ��
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


//β��
void SLPushBack(SL* ps, SLDataType data)
{
	assert(ps);
	SLCheckCapacity(ps);
	ps->arr[ps->size++] = data;
}


//��ӡ����
void SLPrint(SL ps)
{
	int i = 0;
	for (i = 0; i < ps.size; i++)
	{
		if (ps.arr[i] >= 'a' && ps.arr[i] <= 'z' || ps.arr[i] >= 'A' && ps.arr[i] <= 'Z')
		{
			printf("%c ", ps.arr[i]);
		}
		else
		{
			printf("%d ", ps.arr[i]);
		}
	}


	printf("\n");
}


//ǰɾ
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


//βɾ
void SLPopBack(SL* ps)
{
	assert(ps);
	ps->size--;
}


//ָ��λ�ò���
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


//ָ��λ��ɾ��
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


//��������
int  SLFind(SL ps, SLDataType s)
{
	int i = 0;
	for (i = 0; i < ps.size; i++)
	{
		if (s == ps.arr[i])
		{
			printf("�ҵ��ˣ��±�λ��Ϊ%d\n", i);
			return i;
		}
	}
	if (i == ps.size)
	{
		puts("���ź����Ҳ�������");
		return EOF;
	}
}