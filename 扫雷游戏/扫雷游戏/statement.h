#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//Ϊ�˷�����к�����Ϸ�޸ģ�������ö������涨���ʹ�õ�����ֵ
#define ROW 9//������ʾ�Ľ�����
#define COL 9//������ʾ�Ľ�����
#define ROWS ROW+2//����ȫ���Ľ�����
#define COLS COL+2//����ȫ���Ľ�����
//���ֲ�ͬ���Ѷ���Ϸ�ĸ���
#define EASYCOUNT 10
#define MIDCOUNT 20
#define DIFFICULTCOUNT 30

//��ͬ����ģ�������
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void SetMine(char board[ROWS][COLS], int row, int col,int modle);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int modle);