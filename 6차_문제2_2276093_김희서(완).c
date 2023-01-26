#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	double x, y;

	printf("실수를 입력:");
	scanf("%lf", &x);

	y = 2 * x * x - 4 * x + 3;

	if (y >= -5 && y <= 5)
		printf("TRUE");

	else
		printf("FALSE");


	return 0;
}