#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int x;

	printf("16���� �Է� :");
	scanf("%#X", &x);

	printf("8����:%#O\n", x);
	printf("10����:%d\n", x);
	printf("16����:%#X\n", x);

	return 0;
}