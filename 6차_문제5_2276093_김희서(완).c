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

	while (i <= x)
	{
		Even = Even + i;
		i = i + 2;

	}

	printf("1���� %d������ ¦������ %d�Դϴ�.\n", x, Even);

	i = 1;

	while (i <= x)
	{
		Odd = Odd + i;
		i = i + 2;

	}

	printf("1���� %d������ Ȧ������ %d�Դϴ�.\n", x, Odd);

	i = 2;
	Even = 0;
	Odd = 0;

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

	Even = 0;
	Odd = 0;

	for (i = 2; i <= x; i = i + 2)
	{
		Even = Even + i;
	}

	printf("1���� %d������ ¦������ %d�Դϴ�.\n", x, Even);

	for (i = 1; i <= x; i = i + 2)
	{
		Odd = Odd + i;
	}

	printf("1���� %d������ Ȧ������ %d�Դϴ�.\n", x, Odd);


	return 0;
}