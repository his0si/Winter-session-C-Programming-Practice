#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int main(void)

{
	double r,v;

	printf("반지름 r을 입력하시오:");
	scanf("%lf", &r);

	v = r * r * PI;

	printf("원의 넓이 v=%6.2lf", v);


	return 0;
}