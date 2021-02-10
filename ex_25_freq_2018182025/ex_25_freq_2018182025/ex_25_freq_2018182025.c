#include "stdafx.h"
#define CANDIDATE_COUNT 15

int main(void)
{
	double total_votes = 0;			// ÃÑ ¼±°ÅÀÚ
	int point = 0;
	double freq[CANDIDATE_COUNT] = { 0 };

	FILE *fp;
	fp = fopen("vote_data.txt", "r");
	while (!feof(fp)) {
		fscanf(fp, "%d", &point);
		freq[point - 1]++ ;
		total_votes++;
	}
	fclose(fp);

	printf("Total votes: %d\n", (int)total_votes);
	for (int i = 0; i < CANDIDATE_COUNT; i++) {
		double rate = 100 * (freq[i] / total_votes);
		printf("#%3d %8d %7.3f%%\n", i + 1, (int)freq[i], rate);
	}
	return 0;
}