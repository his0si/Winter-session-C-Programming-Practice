#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	char alp;

	printf("���ڸ� �Է��Ͻʽÿ�.");
	scanf("%c", &alp);

	if (alp == 'a'|| alp == 'e'|| alp == 'i'|| alp == 'o'|| alp == 'u')

		printf("�����Դϴ�.");

	else

		printf("������ �ƴմϴ�.");


	return 0;
}