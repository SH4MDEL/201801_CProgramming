#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0;

	printf("더할 두 수를 입력하시오(띄어쓰기로 구분) : ");
	scanf("%d %d", &a, &b);

	printf("합 : %d\n", a + b);

	return 0;
}