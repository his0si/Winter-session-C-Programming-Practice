#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	int x;

	printf("�޴��� �����ϴ� Ű����ũ �Դϴ�.\n");

	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &x);

	switch (x)
	{

		case 1:
			printf("¥�ı���");
			break;

		case 2:
			printf("ī����");
			break;

		case 3:
			printf("�Ҵ߰�Ƽ");
			break;

		case 4:
			printf("��ȭ��");
			break;

		default:
			printf("ġ���Ƽ");
			break;

	}

	return 0;

}