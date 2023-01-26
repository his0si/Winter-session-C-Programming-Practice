#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int  main(void)

{
	double a, b, c;
	double x1 = 0, x2 = 0;


	printf("2차 방정식 ax^2+bx+c=0의 해를 구하는 프로그램입니다\n");

	printf("상수 a값을 입력하시오:");
	scanf("%lf", &a);

	printf("상수 b값을 입력하시오:");
	scanf("%lf", &b);

	printf("상수 c값을 입력하시오:");
	scanf("%lf", &c);

	
	if (a == 0)
		printf("x=%lf", -c / b);

	else 
	{

		if (b * b - 4 * a * c > 0)
		{

			x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
			x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;

			printf("x=%lf and x=%lf", x1,x2);
		}

		else if (b * b - 4 * a * c == 0)
		{
			x1 = -b / 2 * a;

			printf("x=%lf", x1);

		}
		else 
			printf("2차 방정식의 실근이 존재하지 않습니다.");

	}

	return 0;
}