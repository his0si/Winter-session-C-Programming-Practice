#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)

{
	char ch1 = 0, ch2 = 0, x = 0;
	int n = 1;

	printf("ù��° �빮�� �Է�:");
	scanf("%c", &ch1);

	printf("�ι�° �빮�� �Է�:");
	scanf("%c", &ch2);

	while ((x >= ch1) && (x <= ch2))
	{
		x = ch1;
		x++;
		printf("%c", x);
	}

	/*if (ch1 / 2 == 0)
		printf("%c", 'ch1');

	else
		printf("%c", ch1 - 32);

		*/



	return 0;
}