#include <stdio.h>

void num_tmp(int* a, int* b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;

	return;
}

int main()
{
	int x = 10, y = 20;
	printf("x = %d y = %d\n", x, y);
	num_tmp(&x, &y);
	printf("x = %d y = %d\n", x, y);

	return 0;
}