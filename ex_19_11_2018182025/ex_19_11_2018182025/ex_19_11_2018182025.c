#include "stdafx.h"

int main()
{
	int n = 0, sum = 0;
	printf("n�� ���� �Է��Ͻÿ� : ");
	
	for (scanf("%d", &n); n != 0; n--) {
		sum += (n*n);
	}
	printf("��갪�� %d�Դϴ�.\n", sum);
	return 0;
}