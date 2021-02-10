#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double plus(double x, double y); //덧셈함수 정의
double minus(double x, double y); //뺄셈함수 정의
double multiplication(double x, double y); //곱셈함수 정의
double division(double x, double y); //나눗셈함수 정의

int main(void)
{
	double x = 0, y = 0; // 소숫점을 지원하도록 double형으로
	char cal = 0; // 연산자 입력은 char로

	while (1) { //반복문을 사용하여 실행횟수의 기억이 의미있도록

		printf("연산을 입력하시오:");
		scanf("%lf %c %lf", &x, &cal, &y);

		if (cal == '+') {
			printf("연산 결과 :%lf\n", plus(x, y)); // +를 받을 시 plus 함수에 대입하여 바로 출력합니다.
		}
		else if (cal == '-') {
			printf("연산 결과 :%lf\n", minus(x, y)); // -를 받을 시 minus 함수에 대입하여 바로 출력합니다.
		}
		else if (cal == 'x' || cal == '*') {
			printf("연산 결과 :%lf\n", multiplication(x, y)); // x나 *를 받을 시 multiplication 함수에 대입하여 바로 출력합니다.
		}
		else if (cal == '/') {
			printf("연산 결과 :%lf\n", division(x, y)); // /를 받을 시 division 함수에 대입하여 바로 출력합니다.
		}
		else {
			printf("잘못된 입력입니다.\n"); // 그 이외는 잘못된 입력입니다.
			return 0;
		}
	}
	return 0;
}

double plus(double x, double y)
{
	double plus = 0;
	static int plus_count = 0; //덧셈 실행횟수 정의
	plus = x + y;
	plus_count++;
	printf("덧셈은 총 %d번 실행되었습니다.\n", plus_count);
	return plus; // 더한 값 return
}

double minus(double x, double y)
{
	double minus = 0;
	static int minus_count = 0; //뺄셈 실행횟수 정의
	minus = x - y;
	minus_count++;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", minus_count);
	return minus; // 뺀 값 return
}

double multiplication(double x, double y)
{
	double multiplication = 0;
	static int multiplication_count = 0; //곱셈 실행횟수 정의
	multiplication = x * y;
	multiplication_count++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", multiplication_count);
	return multiplication; // 곱한 값 return
}

double division(double x, double y)
{
	double division = 0;
	static int division_count = 0; // 나눗셈 실행횟수 정의
	division = x / y;
	division_count++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", division_count);
	return division; // 나눈 값 return
}