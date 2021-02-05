#include "stdafx.h"

int main()
{
	int i = 0, n = 0, count = 0;
	printf("정수를 입력하시오: ");
	scanf("%d", &i);
	(n = i);

	do
	{
		count++;
		i = (i / 10);
	} while (i != 0);

	int remainder = 0;

	for (count; count > 0; count--) {
		remainder = (n % 10);
		n = (n / 10);
		printf("%d", remainder);
	}
	return 0;
}