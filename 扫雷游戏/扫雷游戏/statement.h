#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//为了方便进行后期游戏修改，这里采用定义来规定设计使用到的数值
#define ROW 9//定义显示的界面行
#define COL 9//定义显示的界面列
#define ROWS ROW+2//定义全部的界面行
#define COLS COL+2//定义全部的界面列
//三种不同的难度游戏的个数
#define EASYCOUNT 10
#define MIDCOUNT 20
#define DIFFICULTCOUNT 30

//不同功能模块的声明
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void SetMine(char board[ROWS][COLS], int row, int col,int modle);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int modle);