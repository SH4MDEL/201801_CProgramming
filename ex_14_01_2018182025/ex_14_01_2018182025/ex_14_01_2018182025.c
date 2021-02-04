#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch = 0;
	printf("문자를 입력하시오 : ");
	scanf("%c", &ch);

	switch (ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("입력한 %c는 모음입니다. \n", ch);
		break;
	default:
		printf("입력한 %c는 자음입니다. \n", ch);
		break;
	}

/*	switch (ch)
	{
	case 'a':
		printf("입력한 a는 모음입니다. \n");
		break;
	case 'e':
		printf("입력한 e는 모음입니다. \n");
		break;
	case 'i':
		printf("입력한 i는 모음입니다. \n");
		break;
	case 'o':
		printf("입력한 o는 모음입니다. \n");
		break;
	case 'u':
		printf("입력한 u는 모음입니다. \n");
		break;
	default:
		printf("입력한 %c는 자음입니다. \n", ch);
		break;
	}
	*/
	return 0;
}
