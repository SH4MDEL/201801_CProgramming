#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int complement = 0;
	printf("정수를 입력하시오 : ");
	scanf("%d", &complement);
	complement = ~complement + 1;
	printf("2의 보수 : %d", complement);

	return 0;
}