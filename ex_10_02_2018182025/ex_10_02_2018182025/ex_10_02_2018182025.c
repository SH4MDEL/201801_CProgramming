#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int iptnum = 0;
	printf("16진수 정수를 입력하시오 : ");
	scanf("%x", &iptnum);

	printf("8진수로는 %#o입니다. \n", iptnum);
	printf("10진수로는 %d입니다. \n", iptnum);
	printf("16진수로는 %#x입니다. \n", iptnum);

	return 0;
}