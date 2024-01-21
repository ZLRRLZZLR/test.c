#define _crt_secure_no_warnings
#include <stdio.h>
//int main()
//{
//	int m, n,p;
//	scanf("m=%dn=%dp=%d ", &m, &n,&p);
//	printf("%d%d%d\n", m, n,p);
//
//	return 0;
//
//
//int main()
//{
//    long int a, b;
//    while (scanf("%ld %ld", &a, &b) != eof)
//    { // 注意 while 处理多个 case
//         64 位输出请用 printf("%lld") to 
//        if (a > b)
//        {
//            printf("%ld>%ld\n", a, b);
//
//        }
//        else if (a < b)
//        {
//            printf("%ld<%ld\n", a, b);
//
//        }
//        else
//        {
//            printf("%ld=%ld\n", a, b);
//        }
//
//    }
//    return 0;
//}
//
//#include <stdio.h>

int main()
{
    long int a, b;
    while (scanf("%ld %ld", &a, &b) != EOF)
    {
        if (a > b)
        {
            printf("%ld>%ld\n", a, b);

        }
        else if (a < b)
        {
            printf("%ld<%ld\n", a, b);

        }
        else
        {
            printf("%ld=%ld\n", a, b);
        }

    }
    return 0;
}