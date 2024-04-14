
#pragma once
#define NAME_MAX 10
#define SEX_MAX 4
#define TEL_MAX 11
#define ADDR_MAX 10

//ǰ������

typedef struct SeqList contact;

//ͨѶ¼�޸Ĳ˵�
void contactmenu();
//�û�����

typedef struct PersonInfo
{
	char name[NAME_MAX];
	char gender[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];

}PeoInfo;

//�������ֲ���
int FindByName(contact* con, char* Name);

//����ͨѶ¼��Ϣ
void LoadContact(contact* con);

//��ʼ��ͨѶ¼

void InitContact(contact* con);

//����ͨѶ¼����

void AddContact(contact* con);

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