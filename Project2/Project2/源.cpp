#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int bin_search(int arr[], int left, int right, int key)
{
	int i = 0;
	for (; i <= 9; i++)
	{
		int mid = 0;
		mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;

		}
	}
	if (i > 9)
	{
		return -1;
	}

}


int main()
{
	int key = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	scanf( "%d", &key );
	int i = bin_search(arr, 0, 9, key);
	if (i != -1)
		printf("�ҵ��ˣ���Ҫ���ҵ������±��ǣ�%d", i);
	else
		printf("��Ҫ���ҵ����ֲ���������");
	return 0;
}