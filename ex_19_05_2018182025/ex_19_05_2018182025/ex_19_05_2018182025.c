#include "stdafx.h"

int main()
{
	int �� = 0;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
	scanf("%d", &��);
	for (;��;) {
		printf("%d ", ��);
		��--;
		Sleep(1000);
		if (�� == 0) {
			printf("(��� ���Ҹ�)\a\n");
			return 0;
		}
	}
}