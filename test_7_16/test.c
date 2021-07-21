#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//*一个关机程序

//#include <stdlib.h>//system
//#include <string.h>//strcmp
//int main()
//{
//	system("shutdown -s -t 60");
//	for (;;)
//	{
//		char input[10] = { 0 };
//		printf("输入123,否则60秒后关机:>");
//		scanf("%s", input);
//		if (strcmp(input, "123") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}

//*猜数字

//1.电脑生成一个随机数
//2.猜数字
//#include <stdlib.h>//srand rand
//#include <time.h>//time
//void menu()
//{
//	printf("*******  猜数字  ********\n");
//	printf("**** 1.play   0.exit ****\n");
//	printf("*************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	ret = rand()%100+1;//生成随机数1~100
//	for (;; )
//	{
//		int guess;
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess == ret)
//		{
//			printf("你猜对了\n");
//			break;
//		}
//		else if(guess >= ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n");
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input;
//	do
//	{
//		menu();
//		printf("请输入选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//*二分查找

// 编写代码在一个整形有序数组中找具体某个数
// 要求:找到了就打印数字所在的下标，找不到则输出：找不到
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int k = 1;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//	for (;left<=right;)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]==k)
//		{
//			printf("%d", mid);
//			break;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	if (left > right)
//		printf("没找到");
//	return 0;
//}

//*九九乘法表

//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			int num = i * j;
//			printf("%dx%d=%-2d ", i, j, num);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//*求10个整数中的最大值

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("最大值是%d", max);
//	return 0;
//}

//*计算 1/1-1/2+1/3+1/4-...-1/100

//int main()
//{
//	double sum = 0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("sum = %lf \n", sum);
//	return 0;
//}

//*1~100所有整数出现多少个9

//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//*打印素数

//#include <math.h> //sqrt开平方
//int main()
//{
//	//打印100~200之间的素数
//	//试除法
//	int count = 0;
//	for (int i = 101; i <= 200; i+=2)
//	{
//		int j;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//*判断1000到2000年内的闰年

//int main()
//{
//	int year;
//	int count=0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		//*判断year是否是闰年
//		//*1.能被4整除且不能被100整除是闰年
//		//*2.能被400整除是闰年
//		//if (0==year%4 && 0!=year%100)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (0==year%400)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		if ((0 == year % 4 && 0 != year % 100) || 0 == year % 400)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//*最大公约数 //辗转相除法

//int gcd(int m, int n) {
//	return n ? gcd(n, m % n) : m;
//}
//
//int main()
//{
//	int m,n,r;
//	scanf("%d%d", &m, &n);
//	//while (r = m%n)
//	//{
//	//	m = n;
//	//	n = r;
//	//}
//	printf("最大公约数为%d\n", gcd(m, n));
//	return 0;
//}

