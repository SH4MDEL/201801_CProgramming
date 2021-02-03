#define _CRT_SECURE_NO_WARNINGS
#define SQMETER_PER_PYEONG 3.3058
#include <stdio.h>

int main()
{
	double pyeong = 0;
	printf("평을 입력하세요 : ");
	scanf("%lf", &pyeong);
	printf("%lf평방미터입니다.\n", SQMETER_PER_PYEONG*pyeong);

	return 0;
}