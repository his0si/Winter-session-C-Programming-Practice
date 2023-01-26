#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	char i=0, d=0, c=0;
	int x, y, n;

	printf("i or d를 입력하시오:");
	scanf("%c", &c);

	printf("n을 입력하시오:");
	scanf("%d", &n);

	if (c == 'i')
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y <= x; y++)
				printf("*");
			printf("\n");


		}
	}

	else if (c == 'd')
	{
		for (x = n; x <= n && x > 0; x--)
		{
			for (y = 0; y < x; y++)
				printf("*");
			printf("\n");
		}
	}

	else
		printf("지원하지 않는 기호입니다.");



	return 0;
}