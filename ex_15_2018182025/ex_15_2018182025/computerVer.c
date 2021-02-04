#include "stdafx.h"
#include "computerVer.h"

void computerVer()
{
	int min = 1, max = 100, loop = 1;
	while (1) {
		int guess = (min + max) / 2;
		printf("I guessed %d. 0=correct 1=smaller 2=bigger:", guess);
		int reply;
		if (scanf("%d", &reply) != 1) {
			printf("Unexpected reply\n");
			break;
		}
		switch (reply) {
		case 0:
			printf("yeay I got answer!!\n");
			loop = 0;
			break;
		case 1:
			max = guess - 1;
			break;
		case 2:
			min = guess + 1;
			break;
		default:
			printf("please...\n");
			break;
		}
		if (min == max) {
			printf("The answer must be %d\n", min);
			break;
		}
		if (min > max) {
			printf("You lied");
			break;
		}
	}
}