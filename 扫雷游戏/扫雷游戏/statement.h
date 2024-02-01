#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASYCOUNT 10
#define MIDCOUNT 20
#define DIFFICULTCOUNT 30


void DisplayBoard(char board[ROWS][COLS],int row,int col);
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void SetMine(char board[ROWS][COLS], int row, int col,int modle);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int modle);