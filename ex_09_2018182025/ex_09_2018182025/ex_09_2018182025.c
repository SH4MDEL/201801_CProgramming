#include <stdio.h>

int main()
{
	double light_speed = 300000, distance = 149600000;

	int seconds = ((int)distance / (int)light_speed);
	int minutes = (seconds / 60);
	int remind = (seconds % 60);

	printf("���� �ӵ��� %lfkm/s\n", light_speed);
	printf("�������� �¾������ �Ÿ��� %lfkm\n", distance);
	printf("���� ���� �ð��� %d�� %d��", minutes, remind);

	return 0;
}