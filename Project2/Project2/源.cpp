//#define _CRT_SECURE_NO_WARNINGS
//#include<string.h>
//#include<stdlib.h>
//#include<stdio.h>
//#include <time.h>
////int bin_search(int arr[], int left, int right, int key)
////{
////	int i = 0;
////	for (; i <= 9; i++)
////	{
////		int mid = 0;
////		mid = (left + right) / 2;
////		if (arr[mid] < key)
////		{
////			left = mid + 1;
////		}
////		else if (arr[mid] > key)
////		{
////			right = mid - 1;
////		}
////		else
////		{
////			return mid;
////
////		}
////	}
////	if (i > 9)
////	{
////		return -1;
////	}
////
////}
////
////
////int main()
////{
////	int key = 0;
////	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	scanf( "%d", &key );
////	int i = bin_search(arr, 0, 9, key);
////	if (i != -1)
////		printf("找到了，您要查找到数字下标是：%d", i);
////	else
////		printf("您要查找的数字不在数组内");
////	return 0;
////}
//
//
//
//
//
//
//
//
//
//
//void game() 
//{
//	int r = rand() % 100 + 1;
//	int i = 0;
//	int count = 5;
//	while (count)
//	{
//		printf("您还剩%d次机会",count);
//		printf("请输入您猜测的数字");
//		scanf("%d", &i);
//		if (i < r) 
//			printf("猜小了\n");
//		else if (i > r)
//			printf("猜大了\n");
//		else 
//		{
//			printf("猜对了\n");
//			break;
//		}
//		count--;
//	}
//	if (0 == count)
//	{
//		char arr[20] ;
//		printf("您未在规定次数内猜对数字\n");
//		system("shutdown - s - -60");
//		printf("注意您的电脑，将在一分钟内关机，如果不想关机，请打印“我是猪”。");
//			while(1)
//			{
//				scanf("%s", &arr);
//				if (strcmp(arr, "我是猪") == 0)
//				{
//					system("shutdown-a");
//					break;
//				}
//			}
//	}
//
//}
//
//void menu()
//{
//	printf("*********************\n");
//	printf("*********************\n");
//	printf("*******1.play*******\n");
//	printf("*********************\n");
//	printf("*********************\n");
//	printf("*******0.end********\n");
//	printf("*********************\n");
//	printf("*********************\n");
//}
//
//
//int main()
//{
//	system("cls");
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	scanf("%d", &input);
//	do {
//		menu();
//		printf("请选择：>");
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误请重新输入。");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}