#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || i == n - 1)
                    printf("* ");
                else if (j == 0 || j == n - 1)
                    printf("* ");
                else
                    printf("  ");

            }
            printf("\n");

        }

    }
    return 0;
}