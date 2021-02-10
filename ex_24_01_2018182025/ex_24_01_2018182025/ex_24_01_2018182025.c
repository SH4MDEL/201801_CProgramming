#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double plus(double x, double y); //�����Լ� ����
double minus(double x, double y); //�����Լ� ����
double multiplication(double x, double y); //�����Լ� ����
double division(double x, double y); //�������Լ� ����

int main(void)
{
	double x = 0, y = 0; // �Ҽ����� �����ϵ��� double������
	char cal = 0; // ������ �Է��� char��

	while (1) { //�ݺ����� ����Ͽ� ����Ƚ���� ����� �ǹ��ֵ���

		printf("������ �Է��Ͻÿ�:");
		scanf("%lf %c %lf", &x, &cal, &y);

		if (cal == '+') {
			printf("���� ��� :%lf\n", plus(x, y)); // +�� ���� �� plus �Լ��� �����Ͽ� �ٷ� ����մϴ�.
		}
		else if (cal == '-') {
			printf("���� ��� :%lf\n", minus(x, y)); // -�� ���� �� minus �Լ��� �����Ͽ� �ٷ� ����մϴ�.
		}
		else if (cal == 'x' || cal == '*') {
			printf("���� ��� :%lf\n", multiplication(x, y)); // x�� *�� ���� �� multiplication �Լ��� �����Ͽ� �ٷ� ����մϴ�.
		}
		else if (cal == '/') {
			printf("���� ��� :%lf\n", division(x, y)); // /�� ���� �� division �Լ��� �����Ͽ� �ٷ� ����մϴ�.
		}
		else {
			printf("�߸��� �Է��Դϴ�.\n"); // �� �ܴ̿� �߸��� �Է��Դϴ�.
			return 0;
		}
	}
	return 0;
}

double plus(double x, double y)
{
	double plus = 0;
	static int plus_count = 0; //���� ����Ƚ�� ����
	plus = x + y;
	plus_count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", plus_count);
	return plus; // ���� �� return
}

double minus(double x, double y)
{
	double minus = 0;
	static int minus_count = 0; //���� ����Ƚ�� ����
	minus = x - y;
	minus_count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", minus_count);
	return minus; // �� �� return
}

double multiplication(double x, double y)
{
	double multiplication = 0;
	static int multiplication_count = 0; //���� ����Ƚ�� ����
	multiplication = x * y;
	multiplication_count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", multiplication_count);
	return multiplication; // ���� �� return
}

double division(double x, double y)
{
	double division = 0;
	static int division_count = 0; // ������ ����Ƚ�� ����
	division = x / y;
	division_count++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", division_count);
	return division; // ���� �� return
}