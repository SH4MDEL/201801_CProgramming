#include "is_prime.h"

void is_prime(int n)
{
	printf("2���� %d������ �Ҽ��� ����մϴ�. \n", n);
		int *arr;
		arr = (int*)malloc(sizeof(int) * n);
		int i = 2;
		// �Է¹��� �� ��ŭ �迭�� ��� �ʱ�ȭ �صд�
		for (i = 2; i <= n; i++) {
			arr[i] = i;
		}

		for (i = 2; i <= n; i++) {
			if (arr[i] == 0) {
				continue;
			}
			for (int j = i + i; j <= n; j += i) { // i�� ������ i�� ������� 0���� üũ
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
