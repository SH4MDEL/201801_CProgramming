#include "stdafx.h"
#include "is_prime.h"

int main()
{
	int num = 0;
	printf("정수를 입력하시오 : ");
	scanf("%d", &num);

	is_prime(num);
	return 0;
}