#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int maxnum(int a, int b, int c)
{
	int abcomp = (a > b) ? a : b;
	return abcomp > c ? abcomp : c;
}

int main()
{
	int a = 0, b = 0, c = 0;
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("�ִ밪 : %d", maxnum(a, b, c));

	return 0;
}