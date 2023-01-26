#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int x;

	printf("16진수 입력 :");
	scanf("%#X", &x);

	printf("8진수:%#O\n", x);
	printf("10진수:%d\n", x);
	printf("16진수:%#X\n", x);

	return 0;
}