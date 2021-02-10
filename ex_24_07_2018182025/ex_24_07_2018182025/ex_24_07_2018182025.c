#include "stdafx.h"
#include "binomial.h"

int main()
{
	int n = 0, k = 0;

	printf("n과 k를 입력하시오 : ");
	scanf("%d %d", &n, &k);
	printf("answer is %d", binomial(n, k));
}