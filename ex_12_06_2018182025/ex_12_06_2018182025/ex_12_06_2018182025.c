#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int complement = 0;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &complement);
	complement = ~complement + 1;
	printf("2�� ���� : %d", complement);

	return 0;
}