#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, i = 0;
	int Even = 0;
	int Odd = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);


	i = 2;

	do
	{
		Even = Even + i;
		i = i + 2;

	}

	while (i <= x);


	printf("1���� %d������ ¦������ %d�Դϴ�.\n", x, Even);


	i = 1;

	do
	{
		Odd = Odd + i;
		i = i + 2;

	}

	while (i <= x);


	printf("1���� %d������ Ȧ������ %d�Դϴ�.\n", x, Odd);


	return 0;
}