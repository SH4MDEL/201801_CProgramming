#include "stdafx.h"
#include "factorial.h"

int main()
{
	int loop = 1;
	while (loop != 0) {
		factorial();
		printf("�׸��Ϸ��� 0 �Է�, ����Ϸ��� �ƹ� �� �Է� : ");
		scanf("%d", &loop);
	}
}