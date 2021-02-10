#include "binomial.h"

int binomial(int n, int k)
{
	if (k == 0 || k == n) {
		return 1;
	}
	if (k > 0 && n > k) {
		return (binomial(n - 1, k - 1) + binomial(n - 1, k));
	}
	else {
		printf("error\n");
		return 0;
	}
}