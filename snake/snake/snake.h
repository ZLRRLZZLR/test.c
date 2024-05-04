#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define WALL L'□'
#define BODY L'■'
#define FOOD L'★'

//蛇的初始位置

#define POS_X 24
#define POS_Y 5
#define KEY_PRESS(VK) (GetAsyncKeyState(VK) & 1 ? 1 : 0)
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>
#include<stdbool.h>
#include<time.h>

//方向
enum DIRECTION
{
	UP = 1,
	DOWN,
	LEFT,
	RIGHT
};

//游戏状态
enum STATE
{
	OK,//正常运行
	END_NORMAL,//撞墙
	KILL_BY_WALL,//咬到自己
	KILL_BY_SELF,//正常结束
};


//蛇身节点

typedef struct SnakeNode
{
	short x;
	short y;
	struct SnakeNode* next;
}SnakeNode, * pSnakeNode;

typedef struct Snake
{
	pSnakeNode _Psnake;//维护整条蛇的指针
	pSnakeNode _Pfood;//维护⻝物的指针
	enum DIRECTION _Dir;//蛇头的方向默认是向右
	enum STATE _State;//游戏状态
	int _Score;//当前获得分数
	int _FoodScore;//默认每个⻝物10分
	int _SleepTime;//每走一步休眠时间
}snake,*psnake;

//设置光标的坐标

void SetPos(short x, short y);

//游戏初始化

void GameStart(psnake ps);

//欢迎界面

void WelcomeToGame();

//创建地图

void CreatMap();

//创建⻝物

void CreateFood(psnake ps);

//初始化蛇

void InitSnake(psnake ps);

//游戏运行过程

void GameRun(psnake ps);

//打印帮助信息

void PrintHelpInfo(psnake ps);

//蛇的移动

void SnakeMove(psnake ps);

//下一个节点是⻝物

int NextIsFood(psnake ps, pSnakeNode pn);

//吃⻝物

void EatFood(psnake ps, pSnakeNode pn);

//不吃⻝物

void NotFood(psnake ps, pSnakeNode pn);

//暂停响应

void pause();

//撞墙检测

void KillByWall(psnake ps);

//撞自身检测

void KillBySelf(psnake ps);

//游戏结束

void GameEnd(psnake ps);
