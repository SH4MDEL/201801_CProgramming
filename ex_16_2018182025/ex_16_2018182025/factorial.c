#include "factorial.h"

void factorial()
{
	long long fact = 1;
	int i = 1, n = 0;

	printf("���� ������ �Է��Ͻÿ�: ");
	if (1 != scanf("%d", &n) || n < 0) {
		printf("�ٸ� ���� �Է��Ͽ��� �մϴ�.\n");
	}
	else while (i <= n)
	{
		fact = fact * i;
		i++;
	}
	printf("%d!�� %lli�Դϴ�.\n", n, fact);
}
