#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double get_double();
double volume(double, double);

int main(void)
{
	printf("�غ� x: ");
	double x = get_double();

	printf("���� h: ");
	double h = get_double();

	printf("�ﰢ���� ���� = %.2lf \n", volume(x, h));

	return 0;
}

double get_double()
{
	double x;
	scanf("%lf", &x);

	return x;
}

double volume(double x, double h)
{
	return 0.5 * x * h;
}