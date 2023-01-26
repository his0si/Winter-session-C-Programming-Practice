#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	int number, x;

	printf("정수를 입력하시오:");
	scanf("%d", &number);

	x = number % 2;

	switch (x)
	{
	case 0:
		printf("짝수");
		break;

	case 1:
		printf("홀수");
		break;

	default:
		printf("정수가 아닙니다.");
		break;

	}

	return 0;
}