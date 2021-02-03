#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double iptnum = 0;

	printf("실수를 입력하시오 : ");
	scanf("%lf", &iptnum);

	printf("실수형식으로는 %lf입니다. \n", iptnum);
	printf("지수형식으로는 %e입니다. \n", iptnum);

	return 0;
}