#include "stdafx.h"
#include "ex_15_2018182025.h"

void selectMode()
{
	int select = 0;
	printf("��ǻ�Ͱ� ����� 1, ���� ����� 2 \n");
	printf("� ������ �÷������� �����Ͻÿ� : ");
	scanf("%d", &select);

	if (select == 1) {
		computerVer();
	}
	else if (select == 2) {
		myVer();
	}
}

int main()
{
	selectMode();
	return 0;
}