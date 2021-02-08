#include "stdafx.h"
#include "print_value.h"

int main()
{
	int roop = 1;

	while (roop >= 0) {
		printf("값을 입력하시오(종료는 음수) : ");
		scanf("%d", &roop);
		print_value(roop);
	}
	return 0;
}