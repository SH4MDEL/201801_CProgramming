#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int iptnum = 0;
	printf("16���� ������ �Է��Ͻÿ� : ");
	scanf("%x", &iptnum);

	printf("8�����δ� %#o�Դϴ�. \n", iptnum);
	printf("10�����δ� %d�Դϴ�. \n", iptnum);
	printf("16�����δ� %#x�Դϴ�. \n", iptnum);

	return 0;
}