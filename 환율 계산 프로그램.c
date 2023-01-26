#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	int x;//환율
	int won;//원화
	int dol;//달러화
	
	printf("환율을 입력하시오:");
	scanf("%d", &x);

	printf("원화 금액을 입력하시오 : ");
	scanf("%d", &won);

	printf("원화 %d원은 %d달러입니다.", won, won/x);
	



	return 0;
}