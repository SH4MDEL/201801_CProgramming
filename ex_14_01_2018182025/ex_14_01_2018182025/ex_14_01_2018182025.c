#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch = 0;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &ch);

	switch (ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("�Է��� %c�� �����Դϴ�. \n", ch);
		break;
	default:
		printf("�Է��� %c�� �����Դϴ�. \n", ch);
		break;
	}

/*	switch (ch)
	{
	case 'a':
		printf("�Է��� a�� �����Դϴ�. \n");
		break;
	case 'e':
		printf("�Է��� e�� �����Դϴ�. \n");
		break;
	case 'i':
		printf("�Է��� i�� �����Դϴ�. \n");
		break;
	case 'o':
		printf("�Է��� o�� �����Դϴ�. \n");
		break;
	case 'u':
		printf("�Է��� u�� �����Դϴ�. \n");
		break;
	default:
		printf("�Է��� %c�� �����Դϴ�. \n", ch);
		break;
	}
	*/
	return 0;
}
