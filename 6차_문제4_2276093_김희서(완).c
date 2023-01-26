#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	int x;

	printf("메뉴를 선택하는 키오스크 입니다.\n");

	printf("숫자를 입력하세요:");
	scanf("%d", &x);

	switch (x)
	{

		case 1:
			printf("짜파구리");
			break;

		case 2:
			printf("카구리");
			break;

		case 3:
			printf("불닭게티");
			break;

		case 4:
			printf("공화뽕");
			break;

		default:
			printf("치즈게티");
			break;

	}

	return 0;

}