#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double iptnum = 0;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &iptnum);

	printf("�Ǽ��������δ� %lf�Դϴ�. \n", iptnum);
	printf("�����������δ� %e�Դϴ�. \n", iptnum);

	return 0;
}