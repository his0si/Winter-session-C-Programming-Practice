#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num[100];

	int i;
	int sum = 0;
	int average = 0;

	for (i = 0; i <= 99; i++)
	{
		num[i] = rand() % 101;

		printf("num[%03d]=%02d ", i, num[i]);
		sum = sum + num[i];
		average = sum / 100.0;

		if (i % 10 == 9)
		{
			printf("\n");
		}
	}

	printf("\nÇÕ°è:%d\n", sum);
	printf("Æò±Õ:%d", average);

	return 0;
}


