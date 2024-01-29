//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//
//
//void print(int arr[10])
//{
//	for (int i = 0; i <= 9; i++)
//	{
//		printf("%d\t", arr[i]);
//
//	}
//
//}
//void init(int arr[10])
//{
//	for (int i = 0; i <= 9; i++)
//	{
//		arr[i] = 0;
//	}
//	for (int i = 0; i <= 9; i++) 
//	{
//		printf("%d\t", arr[i]);
//	}
//
//}
//void reverse(int arr[], int left, int right)
//{
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//		
//	}
//	for (int i = 0; i <= 9; i++) 
//	{
//
//		printf("%d\t", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
// 
//	for (int i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	print(arr);
//	printf("\n");
//	reverse(arr,0,9);
//	printf("\n");
//	init(arr);
//}
#include <stdio.h>

int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        for (int i = 0; i <= a; i++)
        {
            for (int j = 0; j <= a; j++)
            {
                if (i == j)
                    printf("* ");
                else if(i + j == a - 1)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");

        }

    }
    return 0;
}