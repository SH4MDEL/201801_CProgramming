#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double standardWeight(double weight, double height)
{
	return (weight - ((height - 100.0)*0.9));
}

int main()
{
	double weight = 0, height = 0;
	printf("ü�߰� Ű�� �Է��Ͻÿ� : ");
	scanf("%lf %lf", &weight, &height);

	if (standardWeight(weight, height) == 0.0) {
		printf("�����Դϴ�.\n");
	}
	else if (standardWeight(weight, height) > 0.0) {
		printf("��ü���Դϴ�.\n");
	}
	else if (standardWeight(weight, height) < 0.0) {
		printf("��ü���Դϴ�.\n");
	}
	return 0;
}