#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int maxnum(int a, int b, int c)
{
	int abcomp = (a > b) ? a : b;
	return abcomp > c ? abcomp : c;
}

int main()
{
	int a = 0, b = 0, c = 0;
	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("최대값 : %d", maxnum(a, b, c));

	return 0;
}