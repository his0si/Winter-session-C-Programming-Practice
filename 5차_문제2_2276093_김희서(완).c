#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	char alp = 0, answ = 0, x = 0 ;

	printf("�� ���α׷��� �ҹ��� �Է½� �빮�ڷ� ����մϴ�.\n");

	printf("���ڸ� �Է��Ͻʽÿ�:");
	scanf("%c", &alp);

	x = alp - 32;

	(alp >= 'a' && alp <= 'z') ? printf("%c", x) : printf("�ҹ��ڰ� �ƴմϴ�.");



	return 0;
}