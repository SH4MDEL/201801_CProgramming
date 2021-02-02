#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double base = 0, height = 0;

	printf("사각형의 밑변을 입력하시오 : ");
	scanf("%lf", &base);
	printf("사각형의 높이를 입력하시오 : ");
	scanf("%lf", &height);

	printf("사각형의 넓이 : %lf, 사각형의 둘레 : %lf\n", base*height, (2 * (base + height)));

	return 0;
}