#include "stdafx.h"

int main()
{
	int sumnum = 0, iptnum = 0;
	while (iptnum != EOF) {
		printf("���� ���� �Է��Ͻÿ� : ");
		scanf("%d", &iptnum);
		if (iptnum != EOF) {
			sumnum += iptnum;
			printf("%d\n", sumnum);
		}
	}
	printf("���α׷� ����\n");
	return 0;
}