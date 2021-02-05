#include "printMonthCalendar.h"

int printMonthCalendar(int year, int month, int wday)
{
	int days;
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		break;
	case 2:
		days = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 29 : 28;
		break;
	default:
		printf("invalid month: %d\n", month);
		return 0;
	}
	printf("==============================\n");
	printf("========= %4d %4d ==========\n", year, month);
	printf("------------------------------\n");
	printf(" Sun Mon Tue Wed Thu Fri Sat \n");
	//printf("%d-%d : %d, %d\n", year, month, days, wday);

	for (int i = 0; i < wday; i++) {
		printf("    ");
	}

	for (int day = 1; day <= days; day++) {
		printf("%4d", day);
		//print nicely
		if ((wday + day) % 7 == 0) {
			printf("\n");
		}
	}
	printf("\n");

	return days;
}