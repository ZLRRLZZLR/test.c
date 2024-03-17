#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



#if;
char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cur = str1;
	if (*str2 == '\0')
	{
		return (char*)str1;
	}
	while (*cur++)
	{
		s1 = cur;
		s2 = str2;
		while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abc";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		puts("’“≤ªµΩ");
	}
	else
	{
		printf("%s", ret);
	}
	return 0;
}



char* my_strncpy(char* dest, const char* src, size_t num)
{
	assert(dest && src);
	char* ret = dest;
	while (num--)
	{
		*dest++ = *src++;
	}
	return ret;
}


int main()
{
	char arr1[10] = { "abcdef" };
	char arr2[20] = { "xxxxxxxxxxxxxx" };
	char arr3[20] = { "xxxxxxxxxxxxxx" };
	char ret1 = my_strncpy(arr2, arr1, 3);
	char ret2 = my_strncpy(arr3, arr1, 8);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;
}

void* my_menmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			dest = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}

	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };

	my_menmove(arr1 + 2, arr1, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr1[i]);
	}
	return 0;
}



void* my_mencpy(void* str1, const void* str2, size_t num)
{
	void* dest = str1;
	assert(str1 && str2);
	while (num--)
	{
		*(char*)str1 = *(char*)str2;
		str1 = (char*)str1 + 1;
		str2 = (char*)str2 + 1;
	}
	return dest;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_mencpy(arr2, arr1, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr2[i]);
	}
	return 0;
}


int test(char b)
{
	if (b == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



int main()
{
	char p = 0x00000001;
	char b = *(char*)&p;
	int ret = test(b);
	printf("%d", ret);
	return 0;
}


int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1++ == *str2++)
	{
		if (*str2 == '\0')
		{
			return 0;
		}
	}
	return *str1 - *str2;

}


int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "acd";
	char arr3[] = "abcdef";
	printf("%d\n", my_strcmp(arr1, arr2));
	printf("%d\n", my_strcmp(arr1, arr3));
	printf("%d\n", my_strcmp(arr2, arr1));
}



void test(int arr[4][4], int n)
{
	assert(arr);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}

	}

}

void print(int arr[4][4], int n)
{
	assert(arr);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("%\n");
	}
}

int main()
{
	int arr[4][4] = { 0 };
	test(arr, 4);
	print(arr, 4);
	return 0;
}
#endif;