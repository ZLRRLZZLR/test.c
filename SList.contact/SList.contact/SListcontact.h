#pragma once
#include"Slist.h"
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//contact.h


//��ʼ��ͨѶ¼
void InitContact(contact** con);

//���ͨѶ¼����
void AddContact(contact** con);

//ɾ��ͨѶ¼����
void DelContact(contact** con);

//չʾͨѶ¼����
void ShowContact(contact* con);

//����ͨѶ¼����
void FindContact(contact* con);

//�޸�ͨѶ¼����
void ModifyContact(contact** con);

//����ͨѶ¼����
void DestroyContact(contact** con);



