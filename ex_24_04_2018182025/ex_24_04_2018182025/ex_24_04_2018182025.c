#include "stdafx.h"
#include "recursive.h"

int main()
{
	double num = 0;
	printf("n�� �Է��Ͻÿ� : ");
	scanf("%lf", &num);

	printf("answer is %lf\n", recursive(num));
}