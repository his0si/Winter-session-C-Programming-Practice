#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("���� ���� �Է�:");
	scanf("%d", &n);

	while (n)
	{
		printf("%d", n % 10);
		n = n / 10;

	}

	return 0;
}