#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double standardWeight(double weight, double height)
{
	return (weight - ((height - 100.0)*0.9));
}

int main()
{
	double weight = 0, height = 0;
	printf("체중과 키를 입력하시오 : ");
	scanf("%lf %lf", &weight, &height);

	if (standardWeight(weight, height) == 0.0) {
		printf("정상입니다.\n");
	}
	else if (standardWeight(weight, height) > 0.0) {
		printf("과체중입니다.\n");
	}
	else if (standardWeight(weight, height) < 0.0) {
		printf("저체중입니다.\n");
	}
	return 0;
}