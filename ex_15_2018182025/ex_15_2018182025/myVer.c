#include "stdafx.h"
#include "myVer.h"

void myVer()
{
	srand((unsigned)time(NULL));

	int guess, tries = 0;
	int answer = rand() % 1000 + 1;

	do {
		printf("������ �����Ͽ� ���ÿ�:");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("������ ������ �����ϴ�.\n");
		if (guess < answer)
			printf("������ ������ �����ϴ�.\n");
	} while (guess != answer);

	printf("�����մϴ�. �õ�Ƚ��=%d\n", tries);
}