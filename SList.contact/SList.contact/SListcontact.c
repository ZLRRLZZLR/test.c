#include"SListcontact.h"


void menu()
{
	puts("*********ͨѶ¼*********");
	puts("****��ѡ��Ҫ���еĲ���****");
	puts("******1.�����ϵ��******");
	puts("******2.ɾ����ϵ��******");
	puts("******3.չʾ��ϵ��******");
	puts("******4.������ϵ��******");
	puts("******5.�޸���ϵ����Ϣ******");
	puts("********0.�˳�*********");
	puts("***********************");
}

void contactmenu()
{
	puts("***********************");
	puts("******1.��ϵ������******");
	puts("******2.��ϵ���Ա�******");
	puts("******3.��ϵ������******");
	puts("******4.��ϵ�˵绰******");
	puts("******5.��ϵ�˵�ַ******");
	puts("********0.�˳�*********");
	puts("***********************");
}


//��ʼ��ͨѶ¼
void InitContact(contact** con)
{
	*con = NULL;
}


//���ͨѶ¼����

void AddContact(contact** con)
{
    SLTPushBack(con);
	contact* newnode = *con;
	while (newnode->next)
	{
		newnode = newnode->next;
	}
	puts("������Ҫ�����ϵ�˵���Ϣ��");
	puts("��������ϵ��������");
	scanf("%s", newnode->data.name);
	puts("��������ϵ���Ա�");
	scanf("%s", newnode->data.sex);
	puts("��������ϵ�����䣺");
	scanf("%d", &(newnode->data.age));
	puts("��������ϵ�˵绰��");
	scanf("%s", newnode->data.tel);
	puts("��������ϵ�˵�ַ��");
	scanf("%s", newnode->data.addr);
	puts("��Ӳ�������,��ӳɹ�");
}

//ɾ��ͨѶ¼����

void DelContact(contact** con)
{
	assert(con&&*con);
	char arr[NAME_MAX] = { 0 };
	puts("������Ҫɾ������ϵ��������");
	scanf("%s", arr);
	if(strcmp(arr , (*con)->data.name) == 0)
	{
		contact* next = (*con)->next;
		free(*con);
		*con = next;
	}
	else
	{
		SLTNode* petail = (*con)->next;
		SLTNode* pcur = *con;
		while (petail->next != NULL)
		{
			if (strcmp(arr, (petail)->data.name) == 0)
			{
				pcur->next = petail->next;
				free(petail);
				petail = NULL;
				return;
			}
			pcur = pcur->next;
			pcur = pcur->next;
		}
		pcur->next = NULL;
		free(petail);
		petail = NULL;
	}
	puts("��ϵ����Ϣɾ���ɹ���");
}

//չʾͨѶ¼����

void ShowContact(contact* con)
{
	if(NULL == con)
	{
		puts("ͨѶ¼δ�洢�κ���Ϣ���޷�չʾ���������ϵ����Ϣ!");
	}
	else
	{
		while (con)
		{
			puts("��ϵ����Ϣ���£�");
			puts("��ϵ�˵�������");
			printf("%s\n", con->data.name);
			puts("��ϵ�˵��Ա�");
			printf("%s\n", con->data.sex);
			puts("��ϵ�˵����䣺");
			printf("%d\n", con->data.age);
			puts("��ϵ�˵ĵ绰��");
			printf("%s\n", con->data.tel);
			puts("��ϵ�˵ĵ�ַ��");
			printf("%s\n", con->data.addr);
			con = con->next;
		}
	}
}

//����ͨѶ¼����

void FindContact(contact* con)
{
	char arr[NAME_MAX] = { 0 };
	puts("������Ҫ���ҵ���ϵ��������");
	scanf("%s",arr);
	contact* member = FindByName(con,arr);
	if(NULL == member)
	{
		puts("�Ҳ�����ϵ����Ϣ��");
	}
	else
	{
		puts("��ϵ����Ϣ���£�");
		puts("��ϵ�˵�������");
		printf("%s\n", member->data.name);
		puts("��ϵ�˵��Ա�");
		printf("%s\n", member->data.sex);
		puts("��ϵ�˵����䣺");
		printf("%d\n", member->data.age);
		puts("��ϵ�˵ĵ绰��");
		printf("%s\n", member->data.tel);
		puts("��ϵ�˵ĵ�ַ��");
		printf("%s\n", member->data.addr);
	}
}
//�޸�ͨѶ¼����

void ModifyContact(contact** con)
{
	assert(con && *con);
	char arr[NAME_MAX] = { 0 };
	puts("������Ҫ�޸ĵ���ϵ�˵�������");
	scanf("%s",arr);
	contact* member = FindByName(*con, arr);
	if (NULL == member)
	{
		puts("��ϵ�˲������޷��޸ģ�");
	}
	else
	{
		puts("��ϵ���µ���Ϣ���£�");
		puts("��ϵ�˵�������");
		scanf("%s", member->data.name);
		puts("��ϵ�˵��Ա�");
		scanf("%s", member->data.sex);
		puts("��ϵ�˵����䣺");
		scanf("%d", &(member->data.age));
		puts("��ϵ�˵ĵ绰��");
		scanf("%s", member->data.tel);
		puts("��ϵ�˵ĵ�ַ��");
		scanf("%s", member->data.addr);
	}
}

//����ͨѶ¼����

void DestroyContact(contact** con)
{
	assert(con);
    if(NULL == *con)
	{
		return;
	}
	else
	{
		contact* tail = *con;
		while (tail)
		{
			contact* cur = tail->next;
			free(tail);
			tail = cur;
		}
		tail = *con = NULL;
		puts("��ϵ���������ٳɹ���");
	}
}


//�������ֲ���
SLTNode* FindByName(SLTNode* phead, char* Name)
{
	assert(phead);
	SLTNode* pcur = phead;
	while (pcur)
	{
		if (strcmp(&(pcur->data.name), Name) == 0)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}


