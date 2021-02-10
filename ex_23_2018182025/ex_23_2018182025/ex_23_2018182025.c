#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int makeQuestion(void)
{
	int q;
	while (1) {
		q = rand() % 10000;
		int q1 = q / 1000 % 10;
		int q2 = q / 100 % 10;
		int q3 = q / 10 % 10;
		int q4 = q % 10;
		if (q1 == q2) { continue; }
		if (q1 == q3) { continue; }
		if (q1 == q4) { continue; }
		if (q2 == q3) { continue; }
		if (q2 == q4) { continue; }
		if (q3 == q4) { continue; }
		break;
	}
	return q;
}

int countStrikes(int v1, int v2)
{
	int q1 = v1 / 1000 % 10;
	int q2 = v1 / 100 % 10;
	int q3 = v1 / 10 % 10;
	int q4 = v1 % 10;
	int a1 = v2 / 1000 % 10;
	int a2 = v2 / 100 % 10;
	int a3 = v2 / 10 % 10;
	int a4 = v2 % 10;

	int count = 0;
	if (q1 == a1) { count++; }
	if (q2 == a2) { count++; }
	if (q3 == a3) { count++; }
	if (q4 == a4) { count++; }

	return count;
}

int countBalls(int v1, int v2)
{
	int q1 = v1 / 1000 % 10;
	int q2 = v1 / 100 % 10;
	int q3 = v1 / 10 % 10;
	int q4 = v1 % 10;
	int a1 = v2 / 1000 % 10;
	int a2 = v2 / 100 % 10;
	int a3 = v2 / 10 % 10;
	int a4 = v2 % 10;

	int count = 0;
	if (q1 == a2 || q1 == a3 || a1 == a4) { count++; }
	if (q2 == a1 || q2 == a3 || q2 == a4) { count++; }
	if (q3 == a1 || q3 == a2 || q3 == a4) { count++; }
	if (q4 == a1 || q4 == a2 || q4 == a3) { count++; }

	return count;
}

int main(void)
{
	srand((unsigned)time(NULL));
	int question = makeQuestion();

	while (1) {
		int answer;
		if (1 != scanf("%d", &answer)) {
			printf("Hey number only please\n");
			break;
		}
		int strikes = countStrikes(answer, question);
		int balls = countBalls(answer, question);
		printf("%d S %d B\n", strikes, balls);
		if (strikes == 4) {
			break;
		}
	}

	return 0;
}