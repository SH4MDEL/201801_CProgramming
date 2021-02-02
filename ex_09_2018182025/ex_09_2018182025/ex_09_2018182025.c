#include <stdio.h>

int main()
{
	double light_speed = 300000, distance = 149600000;

	int seconds = ((int)distance / (int)light_speed);
	int minutes = (seconds / 60);
	int remind = (seconds % 60);

	printf("빛의 속도는 %lfkm/s\n", light_speed);
	printf("지구에서 태양까지의 거리는 %lfkm\n", distance);
	printf("빛의 도달 시간은 %d분 %d초", minutes, remind);

	return 0;
}