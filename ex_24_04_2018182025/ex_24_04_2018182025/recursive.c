#include "recursive.h"

double recursive(double num)
{
	if (num == 0) {
		return 0;
	}
	else {
		return (1.0 / num) + recursive(num - 1);
	}
}