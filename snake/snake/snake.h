#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define WALL L'¡õ'
#define BODY L'¡ö'
#define FOOD L'¡ï'
#define POS_X 24
#define POS_Y 5

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>
#include<stdbool.h>

enum DIRECTION
{
	UP = 1,
	DOWN,
	LEFT,
	RIGHT
};

enum STATE
{
	OK,
	END_NORMAL,
	KILL_BY_WALL,
	KILL_BY_SELF,
};


typedef struct SnakeNode
{
	short x;
	short y;
	struct SnakeNode* next;
}SnakeNode, * pSnakeNode;

typedef struct Snake
{
	pSnakeNode _Psnake;
	pSnakeNode _Pfood;
	enum DIRECTION _Dir;
	enum STATE _State;
	int _Score;
	int _FoodScore;
	int _SleepTime;
}snake,*psnake;



void SetPos(short x, short y);

void GameStart(psnake ps);

void WelcomeToGame();

void CreatMap();

void CreateFood(psnake ps);

void InitSnake(psnake ps);

void GameRun(psnake ps);
void GameEnd(psnake ps);
