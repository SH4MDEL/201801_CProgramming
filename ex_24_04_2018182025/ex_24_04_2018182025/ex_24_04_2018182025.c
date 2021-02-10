#include "stdafx.h"
#include "recursive.h"

int main()
{
	double num = 0;
	printf("n을 입력하시오 : ");
	scanf("%lf", &num);

	printf("answer is %lf\n", recursive(num));
}