#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double base = 0, height = 0;

	printf("�簢���� �غ��� �Է��Ͻÿ� : ");
	scanf("%lf", &base);
	printf("�簢���� ���̸� �Է��Ͻÿ� : ");
	scanf("%lf", &height);

	printf("�簢���� ���� : %lf, �簢���� �ѷ� : %lf\n", base*height, (2 * (base + height)));

	return 0;
}