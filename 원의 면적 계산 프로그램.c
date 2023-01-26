#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	float radius;
	float area;

	printf("반지름을 입력하시오:");
	scanf("%f", &radius);

	printf("원의 면적:%f",radius*radius*3.14);


	return 0;

}