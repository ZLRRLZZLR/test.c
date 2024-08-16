#include"List.h"


//����ڵ�
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

//�ж��Ƿ�˫�������Ƿ�Ϊ��
bool LTEmpty(LTNode* phead)
{
	assert(phead);
	if(phead->next == phead)
	{
		return true;
	}
	return false;
}

//��ӡ
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

//��ʼ��
void LTInit(LTNode** pphead)
{
	//��˫��������һ���ڱ�λ
	*pphead = LTBuyNode(-1);
}
//LTNode* LTInit()
//{
//	LTNode* phead = LTBuyNode(-1);
//	return phead;
//}


//β��
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

//����
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
	//��ʱpcurָ��phead����phead��û�б�����
	free(phead);
	phead = NULL;
}

//βɾ
void LTPopBack(LTNode* phead)
{
	//���������Ч��������Ϊ�գ�ֻ��һ���ڱ�λ��
	assert(phead && phead->next != phead);

	LTNode* del = phead->prev;
	//phead del->prev del
	del->prev->next = phead;
	phead->prev = del->prev;

	//ɾ��del�ڵ�
	free(del);
	del = NULL;
}

//ͷ��
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

//ͷɾ
void LTPopFront(LTNode* phead)
{
	assert(phead && phead->next != phead);

	LTNode* del = phead->next;

	//phead del del->next
	phead->next = del->next;
	del->next->prev = phead;

	//ɾ��del�ڵ�
	free(del);
	del = NULL;
}

//���ҽڵ�
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
	//û���ҵ�
	return NULL;
}

//��ָ��λ��֮���������
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

//ָ��λ��ɾ��
void LTErase(LTNode* pos)
{
	//pos��������˵����Ϊphead������û�в���phead���޷�����У��
	assert(pos);
	//pos->prev pos pos->next
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;

	free(pos);
	pos = NULL;
}