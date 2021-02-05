#include "stdafx.h"
#define NUMBER 1000

int main()
{
	int count = 0;
	for (int a = 1; a < NUMBER; a++) {
		for (int b = 1; b < NUMBER && a > b; b++) {
			double diag = sqrt(a * a + b * b);
			int c = (int)diag;
			if (diag == c && c < NUMBER) {
				count++;
				printf("#%d: %d %d %d\n", count, a, b, c);
			}
		}
	}
	return 0;
}