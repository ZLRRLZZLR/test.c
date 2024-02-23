#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int a = 10;
    int* p = &a;
    printf("%p\n", p);
    printf("%p\n", p + 1);


    return 0;
}

//int main()
//{
// 
//    int arr[] = { 1,2,3,4,5,1,2,3,4 };
//    for (int i = 0; i <= 8; i++)
//    {
//        int flge = 1;
//        for (int j = 0; j < 9; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                flge++;
//
//            }
//        }
//        if (flge == 2)
//        {
//            printf("%d\n", arr[i]);
//            break;
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0,m = 0;
//    scanf("%d", &n);
//    m = n/2;
//
//    int i = 0;
//    int j = 1;
//            printf("偶数位：");
//            for (int i = 0; i < 32; i += 2)
//            {
//                printf("%d ", (n >> i) & 1);
//            }
//
//            printf("\n");
//            printf("奇数位：");
//            for (int j = 1; j < 32; j += 2)
//            {
//            printf("%d ", (n >> j) & 1);
//            }
//
//        printf("\n");
//    return 0;
//}


//int main() 
//{
//    int a = 5;
//    int b = 3;
//
//    printf("a=%d b=%d\n", a, b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//
//    printf("a=%d b=%d\n", a, b);
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
        //int k = 0;
        //scanf("%d", &k);
        //char arr[50];
        //scanf("%s", arr);
        //for (int i = 0; i < k; i++)
        //{
        //    printf("%c", arr[i]);
        //    
        //}


    //int a = 0;
    //scanf("%d", &a);
    //printf("该数减去6的结果是%d", a - 6);
    ///*int a = 0;
    //scanf("%d", &a);
    //printf("该数加上12的结果是%d", a+12);*/
        //printf("喂！\n\n\n您好！\n再见。");
   /* printf("天\n地\n人\n");*/
    //printf("15减22的结果是%d", 15 - 22);

    /*int a, b, c, n = 1;
    while (scanf("%d", &n) != EOF)
    {
        if (n <= 2)
        {
            printf("1");
        }
        else
        {
            for (int i = 2; i < n; i++)
            {
                c = a + b;
                a = b;
                b = c;
            }
        }
        printf("%d", c);
//
//    }*/
//    return 0;
//}


//int main()
//{
//    char arr[50] = { "\n" };
//    scanf("%s", &arr);
//    int sz = strlen(arr);
//    for (int i = 0; i < sz; i++)
//    {
//        if (arr[i] < "A" || arr[i] > "z")
//        {
//            arr[i] = "\0";
//
//        }
//
//
//
//    }
//
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int count2 = 0;
//    for (int i = 2; i <= n; i++)
//    {
//        int count1 = 0;
//
//        for (int j = 1; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                count1 += j;
//            }
//        }
//        if (count1 == n)
//        {
//            count2 += 1;
//        }
//    }
//    printf("%d", count2);
//
//    return 0;
//}

//
//int main()
//{
//	char a = 'a', b;
//	printf("%c,", ++a);
//	printf("%c\n", b = a++);
//	return 0;
//}
//int main()
//{
//    char arr[1000];
//    scanf("%s", &arr);
//    int sz = strlen(arr);
//    for (int i = 0; i <= sz - 1; i++)
//    {
//        for (int j = 0; i <= sz - 1; j++)
//        {
//            int S;
//            if (arr[i] > arr[j])
//            {
//                S = arr[i];
//                arr[i] = arr[j];
//                arr[j] = S;
//            }
//        }
//    }
//    for (int i = 0; i <= sz - 1; i++)
//    {
//        printf("%c", arr[i]);
//    }
//
//    return 0;
//}
//#include <stdio.h>
//#include<string.h>
//
//int main()
//{
//    char arr[1000];
//    scanf("%s", &arr);
//    int sz = strlen(arr);
//    for (int i = 0; i <= sz - 2; i++)
//    {
//        int S;
//        if (arr[i] > arr[i + 1])
//        {
//            S = arr[i];
//            arr[i] = arr[i + 1];
//            arr[i + 1] = S;
//        }
//    }
//    for (int i = 0; i <= sz - 1; i++)
//    {
//        printf("%c", arr[i]);
//    }
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[1000];
//    scanf("%s", &arr);
//    int sz = strlen(arr);
//    for (int i = 0; i <= sz - 2; i++)
//    {
//        int S;
//        #include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[1000];
//    scanf("%s",&arr);
//    int sz = strlen(arr);
//    for(int i = 0;i <= sz - 2;i++)
//    {
//        int S;
//        if (arr[i] > arr[i + 1])
//        {
//            S = arr[i];
//            arr[i] = arr[i + 1];
//            arr[i + 1] = S;
//        }
//    }
//    for (int i = 0; i <= sz - 1; i++)
//    {
//        printf("%c", arr[i]);
//    }
//
//…      }
//
//    return 0;
//}
//    }
//


//#include <stdio.h>
//#include<string.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        char arr[100] = { 0 };
//        scanf("%s", &arr);
//        int sz = strlen(arr);
//        int flage1 = 0;
//        int flage2 = 0;
//        int flage3 = 0;
//        if (sz >= 8 || arr[0] >= 0 && arr[0] <= 9)
//        {
//            printf("No");
//        }
//        for (int i = 0; i <= sz - 1 ;i++)
//        {
//            if (arr[i] >= 'a' && arr[i] <= 'z')
//            {
//                flage1 = 1;
//            }
//            else if (arr[i] >= 'A' && arr[i] <= 'Z')
//            {
//                flage2 = 1;
//            }
//            else if (arr[i] >= '0' && arr[i] <= '9')
//            {
//                flage3 = 1;
//            }
//            else
//            {
//                printf( "NO" );
//                break;
//            }
//
//        }
//        if (flage1 + flage2 + flage3 >= 2)
//        {
//            printf("YES");
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        char arr[100] = { 0 };
//        scanf("%s", &arr);
//        …{
//                    printf("YES");
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        char arr[100] = { 0 };
//        scanf("%s", &arr);
//        …{
//                    printf("YES");
//        }
//    }
//    return 0;
//}

//int main()
//{
//
// /*   int line = 7;
//        for (int i = 0; i < line; i++)
//        {
//      
//            for (int j = 0; j < line - 1 - i; j++)
//            {
//                printf(" ");
//            }
//  
//            for (int j = 0; j < 2 * i + 1; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    
//        for (int i = 0; i < line - 1; i++)
//        {
//
//            for (int j = 0; j < i + 1; j++)
//            {
//                printf(" ");
//            }
//   
//            for (int j = 0; j < (line - 1 - i) * 2 - 1; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//  
//    }*/
//
//        char arr1[10] = { 0 };
//        int arr2[10] = { 0 };
//        scanf("%s", arr1);
//        scanf("%d", arr2);
//        for (int i = 0; i <= 9; i++)
//        {
//
//            printf("%s", arr1[i]);
//            printf("%d", arr2[i]);
//
//
//        }
//
//	return 0;
//}

//int main()
//{
//
//	for (int i = 0; i <= 999999; i++)
//	{
//		int temp = i;
//	    int sum = 0;
//		int count = 0;
//	    while (temp != 0)
//	{
//		count++;
//		temp /= 10;
//	}
//        temp = i;
//	while (temp != 0)
//	{
//		sum += pow(temp % 10, count);
//		temp /= 10;
//	}
//	if (sum == i)
//		printf("%d\n", i);
//
//	}
//	return 0;
//}
//void Func2()
//{
//    for (int i = 0; i <= 999999; i++)
//    {
//        //1.求当前数字i有多少位
//        //123  123/10=12   12/10= 1   1/10=0
//        int count = 0;
//        int tmp = i;
//        while (tmp != 0)//123    12  1
//        {
//            count++;//1  2  3
//            tmp /= 10;//12   1  0
//        }
//        //i==0 了   count记录下来了 位数 
//        //2、求每个数字的每一位 
//        tmp = i;//123
//        //123 % 10 = 3   tmp /= 10  123 / 10 = 12
//        //12 % 10 = 2   12/10 = 1
//        //1 % 10 = 1    1/10 = 0
//        int sum = 0;
//        while (tmp != 0)
//        {
//            //3  ^   3
//            //pow(x,y);  
//            sum += pow(tmp % 10, count);
//            //tmp = 123/10=12
//            tmp /= 10;
//        }
//        if (sum == i)
//        {
//            printf("%d\n", i);
//        }
//    }
//}
//

//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
//int main()
//{
//	int count = 0;
//	int input = 0;
//	int flge = 0;
//	scanf("%d", &input);
//	for(;input>0;)
//	{
//		input--;
//		flge++;
//		if(flge == 2)
//		{
//			input++;
//			flge = 0;
//		}
//     		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	for(int i = 1;i <= 99999;i++)
//	{
//		int a = i % 10;
//		int b = i % 100 % 10;
//		int c = i % 1000 % 100;
//		int d = i % 10000 % 1000;
//		int e = i % 100000 % 1000;
//		if(pow(a,i)
//	
//	
//	
//	
//	
//	
//	}
//	
//	return 0;
//}

//int n = 0;
//int F(int n)
//{
//while(n)
//	{
//		if (n <= 2)
//			return 1;
//		else
//			return F(n - 1) + F(n - 2);
//
//	}
//}
//
//
//
//int main()
//{
//	while (scanf("%d", &n) != -1)
//	{
//		int i = F(n);
//		printf("%d", i);
//	}
//	return 0;
//}


//int n = 0;
//
//int main()
//{
//	while (scanf("%d", &n) != -1)
//	{
//		int a = 1;
//		int b = 1;
//		int c = 1;
//		if (n <= 2)
//		{
//			printf("%d", 1);
//
//		}
//		else
//		{
//			for(;n >= 3;n--)
//			{
//				c = a + b;
//				a = b;
//				b = c;
//			}
//			printf("%d", c);
//		}
//	}
//
//	return 0;
//}

//int pow(int n,int k)
//{
//	if (k == 1)
//		return n;
//	else
//	    return n * pow(n,k-1);
//
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入n,k:\n");
//	while (scanf("%d%d", &n, &k) != -1)
//	{
//		int i = pow(n, k);
//		printf("%d\n", i);
//	}
//	return 0;
//}


//int DigitSum(int n)
//{
//	if (n <= 9)
//		return n;
//	else
//		return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != -1)
//	{
//		int i = DigitSum(n);
//		printf("%d\n", i);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while(scanf("%d", &n) != -1)
//	{
//		int count = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			count *= i;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}
//void print(int n)
//{
//	if (n <= 9)
//		printf("%d ", n);
//	else
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//
//int n = 0;
//int main()
//{
//	while (scanf("%d", &n) != -1) 
//	{
//		print(n);
//	}
//	return 0;
//}

//int main()
//{
//	int Sn = 0;
//	int a = 0;
//	scanf("%d", &a);
//	int num = 0;
//	for(int i = 1;i <= 5;i++)
//	{
//		num = num * 10 + a;
//			Sn += num;
//	}
//	printf("%d", Sn);
//	return 0;
//}