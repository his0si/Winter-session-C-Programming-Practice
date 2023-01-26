#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("양의 정수 입력:");
	scanf("%d", &n);

	while (n)
	{
		printf("%d", n % 10);
		n = n / 10;

	}

	return 0;
}