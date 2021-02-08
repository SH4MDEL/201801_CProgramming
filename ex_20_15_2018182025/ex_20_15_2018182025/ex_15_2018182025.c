#include "stdafx.h"
#include "round.h"

int main()
{
	double f = 0.0;
	printf("실수를 입력하시오 : ");
	scanf("%lf", &f);
	_round(f);
	return 0;
}