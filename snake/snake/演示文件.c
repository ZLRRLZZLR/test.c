#include"snake.h"
//#include<windows.h>
//#include<stdbool.h>
//int main()
//{
//	//printf("��");
//	//printf("��");
//	//printf("��\n");
//	//printf("��");
//	//system("mode con cols=30 lines=30");
//		// ��ñ�׼����豸�ľ��
//	HANDLE houtput = NULL;
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	// ����һ�������Ϣ�Ľṹ��
//	CONSOLE_CURSOR_INFO cursor_info = {0};
//
//	// ��ȡ�� houtput �����صĿ���̨�ϵĹ����Ϣ������� cursor_info ��
//	GetConsoleCursorInfo(houtput, &cursor_info);
//
//	// �޸Ĺ���ռ��
//	//cursor_info.dwSize = 100;
//
//	cursor_info.bVisible = false;
//
//	// ���ú� houtput �����صĿ���̨�ϵĹ����Ϣ
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
	//wchar_t ch1 = L'��';
	//wchar_t ch2 = L'��';
	//wchar_t ch3 = L'��';
	//wchar_t ch4 = L'��';
	//printf("%c%c\n", 'a', 'b');
	//wprintf(L"%lc\n", ch1);
	//wprintf(L"%lc\n", ch2);
	//wprintf(L"%lc\n", ch3);
	//wprintf(L"%lc\n", ch4);
	printf('��');
	return 0;
}