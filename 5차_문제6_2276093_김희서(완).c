#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int a, b, c ;

	printf("a ������ �Է��� �Է�(mg):");
	scanf("%d", &a);

	printf("b ������ �Է��� �Է�(mg):");
	scanf("%d", &b);

	printf("c ������ �Է��� �Է�(mg):");
	scanf("%d", &c);

	if (a >= 40 && b >= 350 && c >= 17)

		printf("������ �㰡��");

	else

		printf("�㰡�� ������");


	return 0;
}
