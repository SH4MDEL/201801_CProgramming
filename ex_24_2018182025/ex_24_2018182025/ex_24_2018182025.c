#include<stdio.h>

int movecount = 0;

void hanoi(int n, char from, char temp, char to)
{
	if (n == 1) {
		movecount++;
		printf("%d. Move #%d %c->%c\n", movecount, n, from, to);
		return;
	}
	hanoi(n - 1, from, to, temp);
	movecount++;
	printf("%d. Move #%d %c->%c\n", movecount, n, from, to);
	hanoi(n - 1, temp, from, to);
}

int main()
{
	int towersize;
	if (1 != scanf("%d", &towersize)) {
		return 0;
	}
	if (towersize < 1 || towersize > 30) {
		printf("You're insane\n");
		return 0;
	}
	hanoi(towersize, 'A', 'B', 'C');
	return 0;
}