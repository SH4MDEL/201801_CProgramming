#include "stdafx.h"
#include "print_value.h"

int main()
{
	int roop = 1;

	while (roop >= 0) {
		printf("���� �Է��Ͻÿ�(����� ����) : ");
		scanf("%d", &roop);
		print_value(roop);
	}
	return 0;
}