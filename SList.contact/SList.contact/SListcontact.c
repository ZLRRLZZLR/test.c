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

void AddContact(contact* con)
{
	assert(con);
	int num = 0;
	puts("������Ҫ��ӵ���ϵ����Ϣ");
	scanf("%d", &num);
	switch(num)
	{
	case 1:
		scanf("%s", con->data.name);
		break;
	case 2:
		scanf("%s", con->data.sex);
		break;
	case 3:
		scanf("%s", &con->data.age);
		break;
	case 4:
		scanf("%s", con->data.tel);
		break;
	case 5:
		scanf("%s", con->data.addr);
		break;
	default:
		puts("������������");
	}


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

