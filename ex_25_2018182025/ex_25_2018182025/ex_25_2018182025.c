#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEAT_COUNT 100

int main(void)
{
	int seat[SEAT_COUNT] = { 0 };
	// 변수 초기화
	while (1) {
		// 현재 좌석 상태 출력
		for (int i = 0; i < SEAT_COUNT; i++) {
			if (i % 10 == 0) {
				printf("\n");
			}
			printf("%3d[%c]", (i + 1), seat[i] ? 'o' : '-');
		}
		printf("\n");

		int num;
		if (1 != scanf("%d", &num)) {
			break;
		}
		if (num < 1 || num > SEAT_COUNT) {
			continue;
		}
		if (seat[num - 1]) {
			printf("Sorry, You can't. Seat %d has been booked.\n", num);
		}
		else {
			seat[num - 1] = 1;
			printf("Okay. Now you have Seat #%d.\n", num);
		}

	}
	return 0;
}