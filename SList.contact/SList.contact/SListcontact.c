#include"SListcontact.h"

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
	puts("��Ӳ�������");
}

//ɾ��ͨѶ¼����

void DelContact(contact* con);

//չʾͨѶ¼����

void ShowContact(contact* con);

//����ͨѶ¼����

void FindContact(contact* con);

//�޸�ͨѶ¼����

void ModifyContact(contact* con);

//����ͨѶ¼����

void DestroyContact(contact* con);


//�������ֲ���
int FindByName(contact* con, char* Name);

//����ͨѶ¼��Ϣ
void LoadContact(contact* con);

