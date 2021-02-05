#include "stdafx.h"

int main()
{
	int sumnum = 0, iptnum = 0;
	while (iptnum != EOF) {
		printf("더할 수를 입력하시오 : ");
		scanf("%d", &iptnum);
		if (iptnum != EOF) {
			sumnum += iptnum;
			printf("%d\n", sumnum);
		}
	}
	printf("프로그램 종료\n");
	return 0;
}