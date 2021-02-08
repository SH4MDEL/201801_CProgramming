#include "stdafx.h"
#include "cal_area.h"

int main()
{
	double radius = 0.0;
	printf("원의 반지름을 입력하시오 : ");
	scanf("%lf", &radius);
	cal_area(radius);
	return 0;
}