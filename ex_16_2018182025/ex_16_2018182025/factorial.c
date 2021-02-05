#include "factorial.h"

void factorial()
{
	long long fact = 1;
	int i = 1, n = 0;

	printf("양의 정수를 입력하시오: ");
	if (1 != scanf("%d", &n) || n < 0) {
		printf("바른 수를 입력하여야 합니다.\n");
	}
	else while (i <= n)
	{
		fact = fact * i;
		i++;
	}
	printf("%d!은 %lli입니다.\n", n, fact);
}
