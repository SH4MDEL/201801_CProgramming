#include "stdafx.h"
#include "b_rand.h"

int main()
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++) {
		b_rand();
		printf(" ");
	}
	return 0;
}