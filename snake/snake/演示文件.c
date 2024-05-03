#include"snake.h"
//#include<windows.h>
//#include<stdbool.h>
//int main()
//{
//	//printf("哈");
//	//printf("哈");
//	//printf("哈\n");
//	//printf("哈");
//	//system("mode con cols=30 lines=30");
//		// 获得标准输出设备的句柄
//	HANDLE houtput = NULL;
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	// 定义一个光标信息的结构体
//	CONSOLE_CURSOR_INFO cursor_info = {0};
//
//	// 获取和 houtput 句柄相关的控制台上的光标信息，存放在 cursor_info 中
//	GetConsoleCursorInfo(houtput, &cursor_info);
//
//	// 修改光标的占比
//	//cursor_info.dwSize = 100;
//
//	cursor_info.bVisible = false;
//
//	// 设置和 houtput 句柄相关的控制台上的光标信息
//	SetConsoleCursorInfo(houtput, &cursor_info);
//	
//	system("pause");
//		return 0;
//}
//#include <stdio.h>      /* printf */
//#include <time.h>       /* time_t, struct tm, time, localtime, strftime */
//#include <locale.h>     /* struct lconv, setlocale, localeconv */
//
//int main()
//{
//    time_t rawtime;
//    struct tm* timeinfo;
//    char buffer[80];
//
//    struct lconv* lc;
//
//    time(&rawtime);
//    timeinfo = localtime(&rawtime);
//
//    int twice = 0;
//
//    do {
//        printf("Locale is: %s\n", setlocale(LC_ALL, NULL));
//
//        strftime(buffer, 80, "%c", timeinfo);
//        printf("Date is: %s\n", buffer);
//
//        lc = localeconv();
//        printf("Currency symbol is: %s\n-\n", lc->currency_symbol);
//
//        setlocale(LC_ALL, "");
//    } while (!twice++);
//
//    return 0;
//}
#include <stdio.h>
//#include<locale.h>
int main() {
	//setlocale(LC_ALL, "");
	//wchar_t ch1 = L'●';
	//wchar_t ch2 = L'你';
	//wchar_t ch3 = L'好';
	//wchar_t ch4 = L'★';
	//printf("%c%c\n", 'a', 'b');
	//wprintf(L"%lc\n", ch1);
	//wprintf(L"%lc\n", ch2);
	//wprintf(L"%lc\n", ch3);
	//wprintf(L"%lc\n", ch4);
	printf('●');
	return 0;
}