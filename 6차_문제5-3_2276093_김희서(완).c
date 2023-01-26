#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, i = 0;
	int Even = 0;
	int Odd = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);


	i = 2;

	do
	{
		Even = Even + i;
		i = i + 2;

	}

	while (i <= x);


	printf("1부터 %d까지의 짝수합은 %d입니다.\n", x, Even);


	i = 1;

	do
	{
		Odd = Odd + i;
		i = i + 2;

	}

	while (i <= x);


	printf("1부터 %d까지의 홀수합은 %d입니다.\n", x, Odd);


	return 0;
}