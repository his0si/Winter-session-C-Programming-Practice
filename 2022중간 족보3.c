#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int x = 0, a, b;
	double y;

	printf("x�� ����:");
	scanf("%d", &a);

	printf("x�� ����:");
	scanf("%d", &b);

	for (x = a; x <= b; x++)
	{
		printf("x=%d, ", x);
		y = (x * x + 5.0 * x - 7) / (3.0 * x + 2);
		printf("y=%05lf\n", y);
	}

	return 0;
}