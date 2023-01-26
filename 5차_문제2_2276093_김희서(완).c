#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	char alp = 0, answ = 0, x = 0 ;

	printf("이 프로그램은 소문자 입력시 대문자로 출력합니다.\n");

	printf("문자를 입력하십시오:");
	scanf("%c", &alp);

	x = alp - 32;

	(alp >= 'a' && alp <= 'z') ? printf("%c", x) : printf("소문자가 아닙니다.");



	return 0;
}