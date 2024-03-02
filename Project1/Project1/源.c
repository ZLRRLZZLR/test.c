#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

int main()
{







	return 0;
}


//void s(int* p)
//{
//	for(int i = 0;i < 10;i++)
//	{
//		for (int j = 0; j < 10; j++) 
//		{
//			int temp = 0;
//			if (*(p+i) % 2 != 0)
//			{
//				temp = *(p + j);
//				*(p + j) = *(p + i);
//				*(p + i) = temp;
//			}
//			if(*(p + i) % 2 == 0)
//			{
//				break;
//			}
//		}
//	}
//	for(int i = 0;i < 10;i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//
//int main()
//{
//
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	s(arr);
//	return 0;
//}


//void bubble_sort(int* arr,int sz)
//{
//	assert(arr != NULL);
//	int i = 0;
//	for(i = 0;i < sz-1;i++)
//	{
//		int flge = 1;
//		int j = 0;
//		for(j = 0;j < sz-1-i;j++)
//		{
//
//			int temp = 0;
//			if(arr[j] > arr[j+1])
//			{
//				temp = arr[j+1];//temp=8,
//				arr[j + 1] = arr[j];//arr[j+1]=9
//				arr[j] = temp;//arr[j]=8
//				flge = 0;
//			}
//		}
//		if (flge == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = {0};
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for(int i = 0;i <= sz-1;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
