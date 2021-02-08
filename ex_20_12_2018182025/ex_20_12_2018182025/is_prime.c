#include "is_prime.h"

void is_prime(int n)
{
	printf("2부터 %d까지의 소수를 출력합니다. \n", n);
		int *arr;
		arr = (int*)malloc(sizeof(int) * n);
		int i = 2;
		// 입력받은 수 만큼 배열에 모두 초기화 해둔다
		for (i = 2; i <= n; i++) {
			arr[i] = i;
		}

		for (i = 2; i <= n; i++) {
			if (arr[i] == 0) {
				continue;
			}
			for (int j = i + i; j <= n; j += i) { // i를 제외한 i의 배수들은 0으로 체크
				arr[j] = 0;
			}

		}
		// print
		for (i = 2; i <= n; i++) {
			if (arr[i] != 0) {
				printf("%d ", arr[i]);
			}
		}
}
