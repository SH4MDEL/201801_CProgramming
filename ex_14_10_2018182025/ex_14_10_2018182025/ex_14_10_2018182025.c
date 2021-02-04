#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x = 0, y = 0;
	printf("좌표(x, y) : ");
	scanf("%lf %lf", &x, &y);

	if (x > 0 && y > 0) {
		printf("1사분면\n");
	}
	else if (x < 0 && y > 0) {
		printf("2사분면\n");
	}
	else if (x < 0 && y < 0) {
		printf("3사분면\n");
	}
	else if (x > 0 && y < 0) {
		printf("4사분면\n");
	}
	return 0;
}

