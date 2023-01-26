#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	//%연산자를 사용하지 않고 나머지 구하기
	int x, y, a, b;

	printf("x를 y로 나누었을 때 몫 a와 나머지 b를 구하는 프로그램입니다.\n");

	getch();

	printf("x를 입력하십시오:");
	scanf("%d", &x);

	printf("y를 입력하십시오:");
	scanf("%d", &y);

	if (y == 0)
		printf("0으로는 나눌 수 없습니다");
	

	else
	{
		a = x / y;
		b = x - x / y * y;
	}

	printf("몫은 %d, 나머지는 %d입니다.\n", a, b);

	getch();

	//억, 만 단위로 끊어서 출력하시오
	int number,c,d,e;

	printf("억, 만 단위로 끊어 읽는 프로그램입니다.\n");

	printf("숫자를 입력하시오:");
	scanf("%d", &number);

	c = number / 100000000.0;
	d = number / 10000.0;
	e = number % 10000;

	printf("%d는 %d억 %d만 %d입니다\n", number, c, d, e);

	getch();

	//1년 365일은 몇주 며칠인지 구하시오.
	int year = 0, week = 0, day = 1, f = 0;

	year = 365 * day;
	week = year/7.0;
	f = year - year / 7*7;

	printf("1년 365일은 %d주 %d일입니다", week, f);


	return 0;
}