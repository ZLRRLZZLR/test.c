#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>



int main(void)
{
	int money, year;
	double interest, rate;
	scanf("%d%d%lf", &money, &year, &rate);
	interest = money * pow(1 + rate, year) - money;
	printf("interest =%.2f\n", interest);
}


//青蛙跳台阶，汉诺塔,KMP算法
//i/*nt main()
//{
//
//
//	return 0;
//}*/


#if 0;

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<float.h>
#include<math.h>
int main()
{


	float a = 0.45541;
	double x = 1.0;
	double y = 0.1;
	//printf("%.50f\n", a);
	//printf("%.50f\n",x);
	//printf("%.50f\n", x);
	//printf("%.50f\n", x - 0.9);
	//printf("%.50f\n", y);
	if(fabs((x - 0.9) - y) < DBL_EPSILON)
	{
		puts("Yes");
	}
	else
	{
		puts("No");
	}

	return 0;
}


//
//int test(int arr[][3], int p1, int p2, int key)
//{
//	int i = 0;
//	int j = p2 - 1;
//	while (i < p1 && j >= 0)
//	{
//		if (arr[i][j] > key)
//		{
//			i++;
//		}
//		if (arr[i][j] < key)
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//
//		}
//	}
//	return 0;
//
//}
//
//
//int main()
//{
//	int arr[][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	if (test(arr, 3, 3, 12))
//	{
//		puts("找到数字");
//	}
//	else
//	{
//		puts("没找到数字");
//
//	}
//	return 0;
//}


char* test(const char* str)
{

	return str;
}




int main()
{

	char arr[20] = { '0' };
	char* p = test(arr);
	*p = 'a';
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

	return 0;
}




//int main()
//{
//	char killer = 0;
//	for(killer = 'a';killer <= 'd';killer++)
//	{
//		if((killer != 'a') + (killer =='c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
void single_dog(int arr[10], int* num1, int* num2, int sz)
{
	assert(arr && num1 && num2);
	int pos = 0;
	int temp = 0;
	for (int i = 0; i < sz; i++)
	{
		temp ^= arr[i];
	}
	for (int i = 0; i < 32; i++)
	{
		if (temp & 1 == 1)
		{
			pos = i;
			break;
		}
		temp = temp >> 1;
	}
	for (int i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*num1 ^= arr[i];
		}
		else
		{
			*num2 ^= arr[i];
		}
	}

}
int main()
{
	int a = 0, b = 0;
	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	single_dog(arr, &a, &b, sz);
	printf("%d %d\n", a, b);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, s, area;
	scanf("%f%f%f", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("area=%7.2f\n", area);
	printf("23200116320周刘荣\n");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	a = a % 10 * 100 + a / 10 %10 *10 + a / 100 
	printf("%d\n", a);
	printf("23200116320周刘荣\n");
	return 0;
}


// char* strcat1(char*dest,const char*source)
// {
//	 assert(dest && source);
//	 char* s = dest;
//     while(*dest != '\0')
//	 {
//		 dest++;
//	 }
//	 while (*dest++ = *source++)
//	 {
//		 ;
//	 }
//	 return s;
// }
//
//int main()
//{
//	 char s1[] =  "abcdef" ;
//	 char s2[20] = "zxv";
//	printf("%s\n",strcat1(s2, s1));
//	return 0;
//}


size_t my_strlen3(char arr[20])
{
	if (*arr == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen3(arr + 1);
	}
}

size_t my_strlen2(char arr[20])
{
	char* p = arr;
	while (*p != '\0')
	{
		p++;
	}
	return p - arr;
}

size_t my_strlen1(char arr[20])
{
	int count = 0;
	while (*arr++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[20] = { "abcdefg" };
	int ret1 = my_strlen1(arr);
	int ret2 = my_strlen2(arr);
	int ret3 = my_strlen3(arr);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	printf("%d", ret3);
	return 0;
}

#define NEDEUBG
int main()
{
	int a = 10;
	int* p = NULL;
	assert(p != NULL);
	printf("%p", p);
	return 0;
}


int main()
{
	int a = 10;
	char b = 'b';
	int* p1 = &a;
	char* p2 = &b;
	printf("%p\n", p1);
	printf("%p\n", p1 + 1);
	printf("%p\n", p2);
	printf("%p\n", p2 + 1);

	return 0;
}



void ma1(int a, int b)//传值调用,形参只是实参的临时拷贝，无法通过形参改变实参
{
	a = 20;
	b = 10;
}
void ma2(int* a, int* b)//传址调用，通过形参可以改变实参
{
	*a = 20;
	*b = 10;
}
int main()
{
	int a = 10;
	int b = 20;
	//ma1(a, b);
	ma2(&a, &b);
	printf("a:%d b:%d", a, b);
	return 0;
}


void test(int a)
{
	printf("%d", a);
}

int main()
{
	int a = 1000;
	char arr1[10] = { "abcdef" };
	int arr2[6] = { 1,2,3,4,5,6 };
	test(a);
	char* p = &a;
	char(*p1)[10] = &arr1;
	int(*p2)[6] = &arr2;
	void (*p3)(int) = &test;
	int** p4 = &p;
	*p = 1;
	return 0;
}


//int main()
//{
//	int a = 0,b = 0,c = 0,d = 0;
//	scanf("%d", &a);//根据例题输入123
//	b = a % 10;//取出尾数3
//	a = a / 10;//去掉尾数3，a = 12
//	c = a % 10;//取出尾数2, a = 12
//	d = a / 10;//直接取1
//
//	printf("%d%d%d", b,c,d);
//	return 0;
//}

//void test()
//{
//	printf("abcd");
//}
//
//
//
//int mian()
//{
//	int a = 0;
//	char b = '0';
//	int* p1 = &a;
//	char* p2 = &b;
//	return 0;
//}


//void test(int arr[10],int sz)
//{
//
//
//
//	printf("%d%d", );
//}
//
//
//int main()
//{
//	int arr[] = { '1','2','3','4','5','1','2','3','4','6'};
//	int sz = sizeof(arr) / sizeof(0);
//	test(arr,sz);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	int a = *(*(aa + 1) + 0);
//	printf("%d", a);
//	return 0;
//}
//


//int main()
//{
//	int x = 10, y = 5;
//	int z = x;
//	x = y;
//	y = z;
//	printf("%d %d", x, y);
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//int arra(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int arrb(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//int arrc(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//
//void swap(char* buf1, char* buf2, size_t width)
//{
//	for(int i = 0;i < width;i++)
//	{
//		char temp = *buf2;
//		*buf2 = *buf1;
//		*buf1 = temp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base,size_t sz,size_t width,int(*cmp)(const void*p1,const void*p2))
//{
//	for(int i = 0;i < sz - 1;i++)
//	{
//
//		for(int j = 0;j < sz - 1 - i;j++)
//		{
//			if(cmp((char*)base+j*width,(char*)base + (j+1) * width)>0)
//		    {
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	
//	}
//}
//
//void test1()
//{
//	int arr1[10] = { 10,9,8,7,6,5,4,2,3,1 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int arr4[10] = { 'a','h','j','q','c','v','l','i','u','b'};
//	int sz5 = sizeof(arr4) / sizeof(arr4[0]);
//	bubble_sort(arr1, sz1, sizeof(arr1[0]), arra);
//	bubble_sort(arr4, sz5, sizeof(arr4[0]), arra);
//	printf("数组：");
//	for (int i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz5; i++)
//	{
//		printf("%c ", arr4[i]);
//	}
//}
//void test2()
//{
//	struct Stu arr2[3] = { {"zhangsan",9} ,{"lisi",25 },{"wangwu",11} };
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	bubble_sort(arr2, sz2, sizeof(arr2[0]), arrb);
//	for (int i = 0; i < sz2; i++)
//	{
//		printf("%s %d ", arr2[i].name, arr2[i].age);
//	}
//
//}
//void test3()
//{
//	struct Stu arr2[3] = { {"zhangsan",9} ,{"lisi",25 },{"wangwu",11} };
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	bubble_sort(arr2, sz2, sizeof(arr2[0]), arrc);
//	for (int i = 0; i < sz2; i++)
//	{
//		printf("%s %d ", arr2[i].name, arr2[i].age);
//	}
//
//}
//
//
//int main()
//{
//
//	
//	test1();
//	printf("\n");
//	printf("结构体：\n");
//	printf("按名字排：");
//	test2();
//	printf("\n");
//	printf("按年纪排：");
//	test3();
//	return;
//}

//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	puts("*********************");
//	puts("*****1.Add  2.Sub****");
//	puts("*********************");
//	puts("*********************");
//	puts("*****3.Mul  4.Div ****");
//	puts("*********************");
//	puts("********0.exit*******");
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int input = 0;
//	int (*prfarr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//	do
//	{
//		//system("cls");
//		menu();
//		puts("请选择计算器的模式：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			puts("请输入要计算的两个数字：");
//			scanf("%d%d", &a, &b);
//			int ret = prfarr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			puts("程序退出");
//		}
//		else
//		{
//			puts("请重新输入");
//		}
//	} while (input);
//	return 0;
//}


//void sort(char arr[],int sz)
//{
//	assert(arr != NULL);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flge = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//
//			int temp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
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
//
//	char arr1[10] = { "\0" };
//	char arr2[10] = { "\0" };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%c", &arr1[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%c", &arr2[i]);
//	}
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	sort(arr1,sz);
//	sort(arr2,sz);
//	int flge = 1;
//	for (int i = 0; i < sz; i++)
//	{
//		if(arr1[i] != arr2[i])
//		{
//			flge = 0;
//			break;
//		}	
//	}
//	printf("%d", flge);
//	return 0;
//}
//


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

char* my_strstr(const char* str1, const char* str2)
{



}




int main()
{
	my_strstr();
	printf("%d");

	return 0;
}




char* my_strncat(char* dest,const char* src,size_t num)
{
	int flag = 0;
	assert(dest && src);
	while(*dest)
	{
		dest++;
	}
    char* ret = dest;
	while (num--)
	{
		if (*src != '\0')
		{
			*dest++ = *src++;
		}
		else
		{
			flag = 1;
			*dest++ = *src;
		}		
	}
	if (flag == 0)
	{
		*dest = '\0';
	}
	return ret;
}

int main()
{
	char arr1[] = { "abcdef" };
	char arr2[] = { "xx\0xxxxxxxxx" };
	char arr3[] = { "xx\0xxxxxxxxx" };
	char* ret1 = my_strncat(arr2,arr1,3);
	char* ret2 = my_strncat(arr3, arr1, 8);
	printf("%s\n", ret1);
	printf("%s\n", ret2);
	return 0;
}


#endif;