#include"stdafx.h"

#define SIZEOF_ARRAY(a) (sizeof(a) / sizeof(a[0]))
#define HP_GAUGE_SIZE 60

int main(void)
{
	int scores[] = { 10, 100, 99, 98, 95, 94, 86, 68, 45, 50, 27, 15, 7 };

	for (int i = 0; i < SIZEOF_ARRAY(scores); i++) {
		printf("%3d ", scores[i]);
		int count = (scores[i] * HP_GAUGE_SIZE + 50) / 100;
		for (int s = 0; s < count; s++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
