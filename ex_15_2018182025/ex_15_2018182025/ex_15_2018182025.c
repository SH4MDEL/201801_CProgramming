#include "stdafx.h"
#include "ex_15_2018182025.h"

void selectMode()
{
	int select = 0;
	printf("컴퓨터가 맞춘다 1, 내가 맞춘다 2 \n");
	printf("어떤 게임을 플레이할지 선택하시오 : ");
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