#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	char x;

	printf("���ĺ� �ҹ��� �Է�:");
	scanf("%c", &x);

	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
		printf("%c�� �����Դϴ�.", x);

	else
		printf("%c�� ������ �ƴմϴ�.", x);


	return 0;
}