#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	int number, x;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &number);

	x = number % 2;

	switch (x)
	{
	case 0:
		printf("¦��");
		break;

	case 1:
		printf("Ȧ��");
		break;

	default:
		printf("������ �ƴմϴ�.");
		break;

	}

	return 0;
}