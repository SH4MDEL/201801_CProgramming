#include "stdafx.h"

int main(void)
{
	int w = 1; // 2018.01.01 = Monday (0=Sunday, 1=Monday ...)
	int y = 2018;

	for (int m = 1; m <= 12; m++) {
		int days = printMonthCalendar(y, m, w);
		w = (w + days) % 7;
	}
	return 0;
}