#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    int sum = 0;
//    double a = 0;
//    int arr[10] = { 0 };
//    for (int i = 0; i <= 9; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i <= 9; i++)
//    {
//        sum += arr[i];
//    }
//    a = sum / 10.0;
//    printf("%lf", a);
//    return 0;
//}
int main() 
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 6,7,8,9,10 };
	for (int i = 0; i <= 5; i++) 
	{
		int c = a[i];
		a[i] = b[i];
		b[i] = c;

	}
	for (int i = 0; i <= 4; i++) 
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	for (int i = 0; i <= 4; i++)
	{
		printf("%d\t", b[i]);
	}
	return 0;
}