#define pi 3.141592
#include <stdio.h>

int main()
{
	double sieneToAlexandria = 900;
	double alexandriaShadow = 7.2;
	double earthCircumference = 0;
	double earthRadius = 0;

	earthCircumference = (360.0 * sieneToAlexandria) / alexandriaShadow;
	printf("������ �ѷ� : %lf\n", earthCircumference);
	earthRadius = earthCircumference / (2 * pi);
	printf("������ ������ : %lf\n", earthRadius);
	
	return 0;
}