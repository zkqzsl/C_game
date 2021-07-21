#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "a.h"
int main()
{
	int a = 10;
	int b = 20;
	int num = Add(a, b);
	printf("%d", num);
	return 0;
}