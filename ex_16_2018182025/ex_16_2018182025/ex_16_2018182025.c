#include "stdafx.h"
#include "factorial.h"

int main()
{
	int loop = 1;
	while (loop != 0) {
		factorial();
		printf("그만하려면 0 입력, 계속하려면 아무 수 입력 : ");
		scanf("%d", &loop);
	}
}