#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include <time.h>
#include<math.h>
int main()
{
	char arr1[10] = { 0 };
	int arr2[10] = { 0 };
	scanf("%s", arr1);
	scanf("%d", arr2);
	for (int i = 0; i <= 9; i++)
	{

		printf("%s", arr1[i]);
		printf("%c", arr1[i]);
		printf("%d", arr2[i]);


	}

	return 0;
}













//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[50];
//    int count = 0;
//    int S = 0;
//    float a = 0;
//    while (scanf("%d", &n) != -1)
//    {
//        for (int i = 0; i <= n - 1; i++)
//        {
//            scanf("%d", &arr[i]);
//
//            if (arr[i] < 0)
//            {
//                count--;
//            }
//            if (arr[i] > 0)
//            {
//                S += arr[i];
//            }
//        }
//        if (count == -n)
//        {
//            a = 0.0;
//        }
//        else
//        {
//            a = S / n;
//        }
//        printf("%d ", count);
//        printf("%0.1f", a);
//    }
//    return 0;
//}





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
////		printf("�ҵ��ˣ���Ҫ���ҵ������±��ǣ�%d", i);
////	else
////		printf("��Ҫ���ҵ����ֲ���������");
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
//		printf("����ʣ%d�λ���",count);
//		printf("���������²������");
//		scanf("%d", &i);
//		if (i < r) 
//			printf("��С��\n");
//		else if (i > r)
//			printf("�´���\n");
//		else 
//		{
//			printf("�¶���\n");
//			break;
//		}
//		count--;
//	}
//	if (0 == count)
//	{
//		char arr[20] ;
//		printf("��δ�ڹ涨�����ڲ¶�����\n");
//		system("shutdown - s - -60");
//		printf("ע�����ĵ��ԣ�����һ�����ڹػ����������ػ������ӡ����������");
//			while(1)
//			{
//				scanf("%s", &arr);
//				if (strcmp(arr, "������") == 0)
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
//		printf("��ѡ��>");
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("����������������롣");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//char x[5] = { '\xa'};
//int* printNumbers(int n, int* returnSize)
//{
//    scanf("%d", &n);
//    int arr[100000] = {};
//    int i = 1;
//    int a = pow(10, n) - 1;
//    for (; i <= a; i++)
//    {
//        arr[i - 1] = i;
//    }
//
//    return arr;
//
//}
//int main() {
//    int a, b, c;
//    int count = 0;
//    int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//        {
//            arr[1] = 29;
//        }
//        for (int i = 0; i <= b - 2; i++)
//        {
//            count += arr[i];
//        }
//        count += c;
//
//        printf("%d\n", count);
//    }
//    return 0;
//int main() {
//int a = 0;
//while (scanf("%d", &a) != EOF)
//{
//    int c = a * (a - 1) + 1;
//    int i = 1;
//    for (; i < a; i++)
//    {
//        printf("%d+", c);
//        c += 2;
//    }
//    for (; i == a;)
//    {
//        ++c;
//        printf("%d\n", c);
//    }
//}
//return 0;
//}


