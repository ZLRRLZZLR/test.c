#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



//#include <stdio.h>
//
//int main() {
//    double a;
//    while (scanf("%lf", &a) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        printf("%0.3lf\n", a);
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        printf("%d\n", a);
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    puts("     **     ");
//    puts("     **     ");
//    puts("************");
//    puts("************");
//    puts("    *  *    ");
//    puts("    *  *    ");
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    puts("Hello Nowcoder!");
//    return 0;
//}
///**NC107 寻找峰值
// * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
// *
// *
// * @param nums int整型一维数组
// * @param numsLen int nums数组长度
// * @return int整型
// */
//int findPeakElement(int* nums, int numsLen) {
//    if (numsLen == 1 || nums[0] > nums[1])
//        return 0;
//    if (nums[numsLen - 1] > nums[numsLen - 2])
//        return numsLen - 1;
//    int left = 0;
//    int right = numsLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] > nums[mid + 1]) {
//            right = mid;
//        }
//        else
//        {
//            left = mid + 1;
//        }
//    }
//    return left;
//}
///**珠玑妙算
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//int* masterMind(char* solution, char* guess, int* returnSize) {
//    *returnSize = 2;
//    int* arr = (int*)calloc(2, sizeof(int));
//    int s_arr[26] = { 0 };
//    int g_arr[26] = { 0 };
//    for (int i = 0; i < 4; i++) {
//        if (solution[i] == guess[i]) {
//            arr[0] += 1;
//        }
//        else {
//            s_arr[solution[i] - 'A'] += 1;
//            g_arr[guess[i] - 'A'] += 1;
//        }
//    }
//    for (int i = 0; i < 26; i++) {
//        arr[1] += s_arr[i] > g_arr[i] ? g_arr[i] : s_arr[i];
//    }
//    return arr;
//}

// * Note: The returned array must be malloced, assume caller calls free().
// */
//void dif(char* arr, int* anum) {
//    for (int i = 0; i < 4; i++) {
//        switch (arr[i]) {
//        case 'R':
//            anum[0]++;
//            break;
//        case 'G':
//            anum[1]++;
//            break;
//        case 'Y':
//            anum[2]++;
//            break;
//        case 'B':
//            anum[3]++;
//            break;
//        default:
//            break;
//        }
//    }
//
//}
//
//int* masterMind(char* solution, char* guess, int* returnSize) {
//    int* answer = (int*)calloc(2, sizeof(int));
//    int* a1 = (int*)calloc(4, sizeof(int));
//    int* a2 = (int*)calloc(4, sizeof(int));
//    *returnSize = 2;
//    for (int i = 0; i < 4; i++) {
//        if (solution[i] == guess[i]) {
//            answer[0]++;
//            solution[i] = -1;
//            guess[i] = -1;
//        }
//    }
//    dif(solution, a1);
//    dif(guess, a2);
//    for (int i = 0; i < 4; i++) {
//        if (a1[i] > 0 && a2[i] > 0) {
//            if (a1[i] > a2[i])
//                answer[1] += a2[i];
//            else
//                answer[1] += a1[i];
//        }
//    }
//    return answer;
//}


///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//void dif(char* arr, int* anum) {
//    for (int i = 0; i < 4; i++) {
//        switch (arr[i]) {
//        case 'R':
//            anum[0]++;
//            break;
//        case 'G':
//            anum[1]++;
//            break;
//        case 'Y':
//            anum[2]++;
//            break;
//        case 'B':
//            anum[3]++;
//            break;
//        default:
//            break;
//        }
//    }
//
//}
//
//int* masterMind(char* s1, char* g1, int* returnSize){
//    int* answer = (int*)calloc(2, sizeof(int));
//    int* a1 = (int*)calloc(4, sizeof(int));
//    int* a2 = (int*)calloc(4, sizeof(int));
//    *returnSize = 2;
//    for (int i = 0; i < 4; i++) {
//        if (s1[i] == g1[i]) {
//            answer[0] += 1;
//            s1[i] = -1;
//            g1[i] = -1;
//        }
//    }
//    dif(s1, a1);
//    dif(g1, a2);
//    for (int i = 0; i < 4; i++) {
//        if (a1[i] > 0 && a2[i] > 0) {
//            answer[1]++;
//        }
//    }
//    return answer;
//}
//
//
//
//int main()
//{
//    char solution[] = { "YBBY" }, guess[] = { "GYYB" };
//    int returnSize[2];
//    masterMind(solution, guess, returnSize);
//    return 0;
//}
//WY49 数对
//#include <stdio.h>
//
//int main() {
//    long  n, k;
//    while (scanf("%ld %ld", &n, &k) != EOF) {
//        if (k == 0)
//        {
//            printf("%ld", n * n);
//            continue;
//        }
//        long count = 0;
//        for (long y = k + 1; y <= n; y++)
//        {
//            count += ((n / y) * (y - k)) + ((n % y < k) ? 0 : (n % y - k + 1));
//        }
//        printf("%ld\n", count);
//    }
//    return 0;
//}
//HJ46 截取字符串
//#include <stdio.h>
//
//int main()
//{
//    char arr[1000];
//    scanf("%s", arr);
//    int k = 0;
//    scanf("%d", &k);
//
//    for (int i = 0; i < k; i++)
//    {
//        printf("%c", arr[i]);
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    char str[1000];
//    while (scanf("%s", &str) != EOF) {
//        int k = 0;
//        scanf("%d", &k);
//        str[k] = '\0';
//        printf("%s", str);
//    }
//    return 0;
//}
//KS33 寻找奇数
//#include <stdio.h>
//
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        int tmp = 0;
//        int num = 0;
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &tmp);
//            num = num ^ tmp;
//        }
//        printf("%d", num);
//    }
//    return 0;
//}
//NC61 两数之和
//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
//	int num1 = 0;
//	int num2 = 0;
//	*returnSize = 2;
//	int* arr = (int*)malloc(sizeof(*returnSize));
//	for(num1 = 0;num1 < numbersLen - 1;num1++)
//	{
//		for(num2 = num1 + 1;num2 < numbersLen;num2++)
//		{
//			if(numbers[num2] == target - numbers[num1])
//			{
//				arr[0] = num1 + 1;
//				arr[1] = num2 + 1;
//				return arr;
//			}
//		}
//
//	}
//
//	*returnSize = 0;
//	return NULL;
//}