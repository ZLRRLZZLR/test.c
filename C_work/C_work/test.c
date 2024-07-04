#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//KS33 寻找奇数
//#include <stdio.h>
//
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        int tmp = 0;
//        int num = 0;
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &tmp);
//            num = num ^ tmp;
//        }
//        printf("%d", num);
//    }
//    return 0;
//}
//NC61 两数之和
//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
//	int num1 = 0;
//	int num2 = 0;
//	*returnSize = 2;
//	int* arr = (int*)malloc(sizeof(*returnSize));
//	for(num1 = 0;num1 < numbersLen - 1;num1++)
//	{
//		for(num2 = num1 + 1;num2 < numbersLen;num2++)
//		{
//			if(numbers[num2] == target - numbers[num1])
//			{
//				arr[0] = num1 + 1;
//				arr[1] = num2 + 1;
//				return arr;
//			}
//		}
//
//	}
//
//	*returnSize = 0;
//	return NULL;
//}