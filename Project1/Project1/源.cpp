#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main() 
{
	int a = 101;

while(a<=199)
	{
		int i = 0;
		for (i = 2; i <= sqrt(a); i++) 
		{
			if (a % i == 0)
				break;
		}

		if (i > sqrt(a))
			printf("%d\t",a);
		a+=2;
	}

	return 0;
}