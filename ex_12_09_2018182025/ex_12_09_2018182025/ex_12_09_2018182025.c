#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double ac = 0, ae = 0, bc = 0;
	printf("AC AE BC를 입력하시오 : ");
	scanf("%lf %lf %lf", &ac, &ae, &bc);
	printf("DE : %lf", ((ae*bc)/ac));
	
	return 0;
}