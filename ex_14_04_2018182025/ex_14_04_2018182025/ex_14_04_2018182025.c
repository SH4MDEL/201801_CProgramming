#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int mchoice = 0, cchoice = 0;
	srand(time(0));
	printf("�����Ͻÿ�(1: ����, 2: ����, 3: ��) : ");
	scanf("%d", &mchoice);
	cchoice = rand() % 3 + 1;

	if (mchoice == 1) {
		if (cchoice == 1) {
			printf("�����ϴ�. ��� : ����, ��� : ����\n");
		}
		else if (cchoice == 2) {
			printf("�����ϴ�. ��� : ����, ��� : ����\n");
		}
		else if (cchoice == 3) {
			printf("�̰���ϴ�. ��� : ����, ��� : ��\n");
		}
	}
	else if (mchoice == 2) {
		if (cchoice == 1) {
			printf("�̰���ϴ�. ��� : ����, ��� : ����\n");
		}
		else if (cchoice == 2) {
			printf("�����ϴ�. ��� : ����, ��� : ����\n");
		}
		else if (cchoice == 3) {
			printf("�����ϴ�. ��� : ����, ��� : ��\n");
		}
	}
	else if (mchoice == 3) {
		if (cchoice == 1) {
			printf("�����ϴ�. ��� : ��, ��� : ����\n");
		}
		else if (cchoice == 2) {
			printf("�̰���ϴ�. ��� : ��, ��� : ����\n");
		}
		else if (cchoice == 3) {
			printf("�����ϴ�. ��� : ��, ��� : ��\n");
		}
	}
	else {
		printf("�߸��� �Է�\n");
	}
	return 0;
}