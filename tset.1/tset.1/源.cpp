#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a = 0;

    while (scanf("%d", &a) != EOF)
    {
        int b = 0;
        while (b < a)
        {
            printf("%s", "*");
            b += 1;
        }
        printf("\n");


    }

    return 0;

}