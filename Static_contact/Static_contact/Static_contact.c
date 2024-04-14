#include"Static_seqlist.h"

void menu()
{
	puts("*********��ѡ����Ҫ���еĲ���*******");
	puts("*******1.����ͨѶ¼��ʷ��ϵ����Ϣ****");
	puts("*******2.����ͨѶ¼��ϵ����Ϣ*******");
	puts("*******3.ɾ��ͨѶ¼��ϵ����Ϣ*******");
	puts("*******4.չʾͨѶ¼��ϵ����Ϣ*******");
	puts("*******5.����ͨѶ¼��ϵ����Ϣ*******");
	puts("*******6.�޸�ͨѶ¼��ϵ����Ϣ*******");
	puts("*************0.�˳�����************");

}


void contactmenu()
{
	puts("****��ѡ����Ҫ�޸ĵ�����****");
	puts("*******1.��ϵ������*******");
	puts("*******2.��ϵ���Ա�*******");
	puts("*******3.��ϵ������*******");
	puts("*******4.��ϵ�˵绰*******");
	puts("*******5.��ϵ�˵�ַ*******");
	puts("*******0.�˳��޸� ********");

}

//�������ֲ���
int FindByName(contact* con, char* Name)
{
	assert(con);
	assert(Name);
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->arr[i].name, Name))
		{
			return i;
		}
	}
	return EOF;
}


//��ʼ��ͨѶ¼

void InitContact(contact* con)
{
	assert(con);
	SLInit(con);
}

//����ͨѶ¼��Ϣ
void LoadContact(contact* con)
{
	assert(con);
	FILE* pf = fopen("contact.txt", "rb");

	if (NULL == pf)
	{
		perror("fopen:");
		exit(1);
	}

	PeoInfo info;
	while (fread(&info, sizeof(PeoInfo), 1, pf))
	{
		SLPushBack(con, info);
	}

	fclose(pf);
	pf = NULL;
	puts("ͨѶ¼��ʷ���ݼ��سɹ���");
}

//����ͨѶ¼����

void AddContact(contact* con)
{
	assert(con);
	PeoInfo peniof;
	if((sizeof(PeoInfo) * con->size ) >= ARR_MAX)
	{
		puts("ͨѶ¼�����ӵ���������������ʧ�ܣ�");
		return;
	}
	puts("������Ҫ���ӵ���ϵ������:");
	scanf("%s", peniof.name);
	int find = FindByName(con, peniof.name);

	if (find >= 0)
	{
		puts("��Ҫ���ӵ���ϵ���Ѵ��ڣ�");
		ShowContact(con);
		return;
	}
	puts("������Ҫ���ӵ���ϵ�˵��Ա�:");
	scanf("%s", peniof.gender);
	puts("������Ҫ���ӵ���ϵ�˵�����:");
	scanf("%d", &peniof.age);
	puts("������Ҫ���ӵ���ϵ�˵ĵ绰:");
	scanf("%s", peniof.tel);
	puts("������Ҫ���ӵ���ϵ�˵ĵ�ַ:");
	scanf("%s", peniof.addr);

	SLPushBack(con, peniof);

	puts("���ӳɹ���");
}


//ɾ��ͨѶ¼����

void DelContact(contact* con)
{
	assert(con);
	char name[NAME_MAX];
	puts("������Ҫɾ������ϵ�˵�����");
	scanf("%s", &name);

	int find = FindByName(con, name);
	if (find < 0)
	{
		puts("��Ҫ���ӵ���ϵ����Ϣ�����ڣ�ɾ��ʧ��");
		return;
	}
	SLErase(con, find);
	puts("ɾ���ɹ���");

}

//չʾͨѶ¼����

void ShowContact(contact* con)
{
	assert(con);
	if (0 == con->size)
	{
		puts("ͨѶ¼��δ�洢�κ���Ϣ���޷�չʾ");
		return;
	}
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		printf("��ϵ��%d\n", i + 1);
		printf("������%-s\n", con->arr[i].name);
		printf("�Ա�%-s\n", con->arr[i].gender);
		printf("���䣺%-d\n", con->arr[i].age);
		printf("�绰��%-s\n", con->arr[i].tel);
		printf("��ַ��%-s\n", con->arr[i].addr);
	}
}

//����ͨѶ¼����

void FindContact(contact* con)
{
	assert(con);
	char name[NAME_MAX];
	puts("������Ҫ���ҵ���ϵ�˵�����");
	scanf("%s", &name);
	int find = FindByName(con, name);
	if (find < 0)
	{
		puts("��Ҫ���ҵ���ϵ����Ϣ�����ڣ�����ʧ�ܣ�");
		return;
	}
	puts("���ҳɹ�����ϵ����Ϣ���£�");
	printf("��ϵ��%d\n", find + 1);
	printf("������%-s\n", con->arr[find].name);
	printf("�Ա�%-s\n", con->arr[find].gender);
	printf("���䣺%-d\n", con->arr[find].age);
	printf("�绰��%-s\n", con->arr[find].tel);
	printf("��ַ��%-s\n", con->arr[find].addr);
}

//�޸�ͨѶ¼����

void ModifyContact(contact* con)
{
	assert(con);
	char name[NAME_MAX];
	puts("������Ҫ�޸ĵ���ϵ�˵�����");
	scanf("%s", &name);
	int find = FindByName(con, name);
	if (find < 0)
	{
		puts("��Ҫ���ӵ���ϵ����Ϣ�����ڣ��޸�ʧ��");
		return;
	}
	int num = 0;
	while (1)
	{
		contactmenu();
		scanf("%d", &num);
		if (0 == num)
		{
			puts("�޸Ľ���");
			break;
		}
		puts("�޸Ŀ�ʼ��");
		switch (num)
		{
		case 1:
			scanf("%s", con->arr[find].name);
			puts("�޸ĳɹ�");
			break;
		case 2:
			scanf("%s", con->arr[find].gender);
			puts("�޸ĳɹ�");
			break;
		case 3:
			scanf("%d", &con->arr[find].age);
			puts("�޸ĳɹ�");
			break;
		case 4:
			scanf("%s", con->arr[find].tel);
			puts("�޸ĳɹ�");
			break;
		case 5:
			scanf("%s", con->arr[find].addr);
			puts("�޸ĳɹ�");
			break;
		default:
			puts("�����������������");
			break;
		}
	}
}

//����ͨѶ¼
void SaveContact(contact* con)
{
	FILE* pf = fopen("contact.txt", "wb");
	if (NULL == pf)
	{
		perror("fopen");
		exit(1);
	}
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		fwrite(con->arr + 1, sizeof(PeoInfo), 1, pf);
	}
	puts("ͨѶ¼���ݱ���ɹ���");
	fclose(pf);
	pf = NULL;
}

//����ͨѶ¼����

void DestroyContact(contact* con)
{
	assert(con);
	SaveContact(con);
	SLDestroy(con);
	puts("���ٳɹ���");
}