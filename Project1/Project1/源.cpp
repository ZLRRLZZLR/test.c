#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 0;
	while (a <= 100) {
		if (a / 10 == 9 || a % 10 == 9) 
		{
			if (a / 10 == 9 && a % 10 == 9) {
				b += 2;
			}
			else {
				b += 1;
			}
		
		}
		a += 1;

	}
	printf("%d", b);
	return 0;
}