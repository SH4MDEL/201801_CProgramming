#define _CRT_SECURE_NO_WARNINGS
#define SQMETER_PER_PYEONG 3.3058
#include <stdio.h>

int main()
{
	double pyeong = 0;
	printf("���� �Է��ϼ��� : ");
	scanf("%lf", &pyeong);
	printf("%lf�������Դϴ�.\n", SQMETER_PER_PYEONG*pyeong);

	return 0;
}