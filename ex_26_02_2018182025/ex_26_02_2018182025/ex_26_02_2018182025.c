#include "stdafx.h"

#define STEPS 16
#define GRAPH_WIDTH 60

int main(void)
{
	for (int i = 0; i <= STEPS; i++) {
		double r = 2 * M_PI * i / STEPS;
		double v = sin(r);
		//printf("%2d %7.3f %7.3f:",(i+1), r, v);
		printf("%7.3f:", v);
		//int count = (int) ((v+1) * GRAPH_WIDTH / 2);
		int count = (int)(v * GRAPH_WIDTH / 2 + GRAPH_WIDTH / 2 + 0.5);
		for (int s = 0; s < count; s++) {
			printf(" ");
		}
		printf("*\n");
	}
	return 0;
}