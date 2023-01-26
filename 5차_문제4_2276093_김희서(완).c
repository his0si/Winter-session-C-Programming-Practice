#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	char alp;

	printf("문자를 입력하십시오.");
	scanf("%c", &alp);

	if (alp == 'a'|| alp == 'e'|| alp == 'i'|| alp == 'o'|| alp == 'u')

		printf("모음입니다.");

	else

		printf("모음이 아닙니다.");


	return 0;
}