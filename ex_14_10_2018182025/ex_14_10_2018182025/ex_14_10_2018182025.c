#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x = 0, y = 0;
	printf("��ǥ(x, y) : ");
	scanf("%lf %lf", &x, &y);

	if (x > 0 && y > 0) {
		printf("1��и�\n");
	}
	else if (x < 0 && y > 0) {
		printf("2��и�\n");
	}
	else if (x < 0 && y < 0) {
		printf("3��и�\n");
	}
	else if (x > 0 && y < 0) {
		printf("4��и�\n");
	}
	return 0;
}

