#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	char x;

	printf("알파벳 소문자 입력:");
	scanf("%c", &x);

	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
		printf("%c는 모음입니다.", x);

	else
		printf("%c는 모음이 아닙니다.", x);


	return 0;
}