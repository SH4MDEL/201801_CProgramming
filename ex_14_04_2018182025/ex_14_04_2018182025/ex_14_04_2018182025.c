#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int mchoice = 0, cchoice = 0;
	srand(time(0));
	printf("선택하시오(1: 가위, 2: 바위, 3: 보) : ");
	scanf("%d", &mchoice);
	cchoice = rand() % 3 + 1;

	if (mchoice == 1) {
		if (cchoice == 1) {
			printf("비겼습니다. 당신 : 가위, 상대 : 가위\n");
		}
		else if (cchoice == 2) {
			printf("졌습니다. 당신 : 가위, 상대 : 바위\n");
		}
		else if (cchoice == 3) {
			printf("이겼습니다. 당신 : 가위, 상대 : 보\n");
		}
	}
	else if (mchoice == 2) {
		if (cchoice == 1) {
			printf("이겼습니다. 당신 : 바위, 상대 : 가위\n");
		}
		else if (cchoice == 2) {
			printf("비겼습니다. 당신 : 바위, 상대 : 바위\n");
		}
		else if (cchoice == 3) {
			printf("졌습니다. 당신 : 바위, 상대 : 보\n");
		}
	}
	else if (mchoice == 3) {
		if (cchoice == 1) {
			printf("졌습니다. 당신 : 보, 상대 : 가위\n");
		}
		else if (cchoice == 2) {
			printf("이겼습니다. 당신 : 보, 상대 : 바위\n");
		}
		else if (cchoice == 3) {
			printf("비겼습니다. 당신 : 보, 상대 : 보\n");
		}
	}
	else {
		printf("잘못된 입력\n");
	}
	return 0;
}