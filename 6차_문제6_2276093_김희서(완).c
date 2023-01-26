#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int  main(void)

{
	int n = 0, a = 0, i = 0, sum = 0;

	printf("양의 정수 n을 입력:");
	scanf("%d", &n);

	while (i < n)
	{
		i++;
		a = pow((- 1), i) * i * i;
		sum = sum + a;

	}

	printf("sum = %d", sum);

	return 0;
}