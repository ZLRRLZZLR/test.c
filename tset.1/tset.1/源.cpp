#define _CRT_SECURE_NO_WARNINGS
#include <malloc.h>
#include <stdio.h>

int main()
{
    int M;
    scanf("%d", &M);
    if (M % 5 == 0) {
        printf("%s", "YES");

    }
    else {
        printf("%s", "NO");
    }


}