#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<errno.h>

#include <stdio.h>

int main()
{
    int n = 9;
    float* pFloat = (float*)&n;//int*
    printf("n的值为：%d\n", n);
    printf("*pFloat的值为：%f\n", *pFloat);

    *pFloat = 9.0;
    printf("num的值为：%d\n", n);
    printf("*pFloat的值为：%f\n", *pFloat);
    return 0;
}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[] = { 1,2,3,4,8,8,8 };
//	int ret = memcmp(arr1, arr2, 20);
//	printf("%d\n", ret);
//
//	return 0;
//}



//int main()
//{
//	char arr[] = "hello world";
//	memset(arr+2, 'y', 7);
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	memset(arr, 0, 10);//以字节为单位设置的
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int b = 0x11223344;
//
//	return 0;
//}
//


//int main()
//{
//	int a = -1;
//	//a == 10000000000000000000000000000001原码
//	//a == 11111111111111111111111111111110反码
//	//a == 11111111111111111111111111111111补码
//
//	return 0;
//}




//int myatoi(const char* str1)
//{
//	assert(str1);
//	int str = 0;
//	char* ret = str1;
//	while(*str1 == ' ')
//	{
//		str1++;
//	}
//	if (*str1 == '+' ||* str1 == '-')
//	{
//		str1++;
//	}
//	if(*str1 <'1'||*str1 > '9')
//	{
//		return 0;
//	}
//	while (*str1)
//	{
//		if (*str1 >= '1' && *str1 <= '9')
//		{
//			str += *str1 - '0';
//		}
//		else 
//		{
//			break;
//		}
//	}
//	if (*ret == '+')
//	{
//		return str;
//	}
//	else if (*ret == '-')
//	{
//		return -str;
//	}
//
//}
//
//int main()
//{
//
//	printf("%d\n", myatoi("a123"));
//	printf("%d\n", myatoi("    123"));
//	printf("%d\n", myatoi("+123"));
//	printf("%d\n", myatoi("-123"));
//	printf("%d\n", myatoi("123.123"));
//	printf("%d\n", myatoi("-123"));
//	printf("%d\n", myatoi("-999999999999999999999999999999999999999"));
//
//
//	return 0;
//}


//char* myStrncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* ret = dest;
//	int i = 0;
//	for (; src[i] != '\0' && i < num; i++)
//	{
//		dest[i] = src[i];
//	}
//	for (; i < num; i++)
//	{
//		dest[i] = '\0';
//	}
//
//	return ret;
//}
//
////char* myStrncpy(char* dest, const char* src, int n)
////{
////	int i = 0;
////	for (i = 0; src[i] != '\0' && i < n; i++)
////	{
////		dest[i] = src[i];
////	}
////	if (i < n)
////	{
////		dest[i] = '\0';
////	}
////	return dest;
////}
//int main()
//{
//		char arr1[] = { "abcdef" };
//		char arr2[20] = { "xxxxxxxxxxxxxx" };
//		char arr3[20] = { "xxxxxxxxxxxxxx" };
//		myStrncpy(arr2, arr1, 3);
//	    myStrncpy(arr3, arr1, 8);
//	return 0;
//}

//

//int main()
//{
//	char arr1[] = { "abcdef" };
//	char arr2[20] = { "xxxxxxxxxxxxxx" };
//	char arr3[20] = { "xxxxxxxxxxxxxx" };
//	my_strncpy(arr2, arr1, 3);
//    my_strncpy(arr3, arr1, 8);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

//
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cur = str1;
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cur++)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//		if (*str2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		puts("找不到");
//	}
//	else
//	{
//		printf("%s", ret);
//	}
//	return 0;
//}
//
//
//
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (num--)
//	{
//		*dest++ = *src++;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[10] = { "abcdef" };
//	char arr2[20] = { "xxxxxxxxxxxxxx" };
//	char arr3[20] = { "xxxxxxxxxxxxxx" };
//	char ret1 = my_strncpy(arr2, arr1, 3);
//	char ret2 = my_strncpy(arr3, arr1, 8);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			dest = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	my_memmove(arr1 + 2, arr1, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//}
//
//
//
//void* my_mencpy(void* str1, const void* str2, size_t num)
//{
//	void* dest = str1;
//	assert(str1 && str2);
//	while (num--)
//	{
//		*(char*)str1 = *(char*)str2;
//		str1 = (char*)str1 + 1;
//		str2 = (char*)str2 + 1;
//	}
//	return dest;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_mencpy(arr2+2, arr2, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//	return 0;
//}
//
//
//int test(char b)
//{
//	if (b == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//
//int main()
//{
//	char p = 0x00000001;
//	char b = *(char*)&p;
//	int ret = test(b);
//	printf("%d", ret);
//	return 0;
//}
//
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1++ == *str2++)
//	{
//		if (*str2 == '\0')
//		{
//			return 0;
//		}
//	}
//	return *str1 - *str2;
//
//}
//
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acd";
//	char arr3[] = "abcdef";
//	printf("%d\n", my_strcmp(arr1, arr2));
//	printf("%d\n", my_strcmp(arr1, arr3));
//	printf("%d\n", my_strcmp(arr2, arr1));
//}
//
//
//
//void test(int arr[4][4], int n)
//{
//	assert(arr);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (i == j || j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//
//	}
//
//}
//
//void print(int arr[4][4], int n)
//{
//	assert(arr);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("%\n");
//	}
//}
//
//int main()
//{
//	int arr[4][4] = { 0 };
//	test(arr, 4);
//	print(arr, 4);
//	return 0;
//}
