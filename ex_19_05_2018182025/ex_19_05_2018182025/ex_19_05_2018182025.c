#include "stdafx.h"

int main()
{
	int ㅅ = 0;
	printf("카운터의 초기값을 입력하시오 : ");
	scanf("%d", &ㅅ);
	for (;ㅅ;) {
		printf("%d ", ㅅ);
		ㅅ--;
		Sleep(1000);
		if (ㅅ == 0) {
			printf("(경고 벨소리)\a\n");
			return 0;
		}
	}
}