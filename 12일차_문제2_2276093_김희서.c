#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double get_double();
double volume(double, double);

int main(void)
{
	printf("밑변 x: ");
	double x = get_double();

	printf("높이 h: ");
	double h = get_double();

	printf("삼각형의 면적 = %.2lf \n", volume(x, h));

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