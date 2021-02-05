#include "stdafx.h"

int main()
{
	int height = 0;
	while (height != -1)
	{
		printf("막대의 높이(종료: -1) : ");
		scanf("%d", &height);
		if (height >= 1 && height <= 50) {
			for (; height != 0; height--) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}