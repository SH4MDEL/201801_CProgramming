#include "cal_area.h"

void cal_area(double radius)
{
	double area = radius * radius*3.141592;
	printf("원의 면적은 %lf입니다.\n", area);
}
