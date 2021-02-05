#include "stdafx.h"

int main()
{
	int n = 0, sum = 0;
	printf("n의 값을 입력하시오 : ");
	
	for (scanf("%d", &n); n != 0; n--) {
		sum += (n*n);
	}
	printf("계산값은 %d입니다.\n", sum);
	return 0;
}