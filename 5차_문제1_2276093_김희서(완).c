#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int  main(void)

{
	double a = 0, v = 0, s = 0, h = 0;

	printf("a을 입력:");
	scanf("%lf", &a);

	v = (sqrt(2.0) / 12) * a * a * a;
	s = sqrt(3) * a * a;
	h = sqrt(6) / 3 * a;

	printf("부피 v=%d\n",(int) v);
	printf("겉넓이 s=%d\n", (int) s);
	printf("높이 h=%d\n",(int) h);


	return 0;
}