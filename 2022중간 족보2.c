#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int n;
	char fruit, a, b, m, p;

	printf("���� �Է�:");
	scanf("%c", &fruit);

	printf("���� �Է�:");
	scanf("%d", &n);

	if (fruit == 'a')
	{
		printf("��� %d���� �����ϼ̽��ϴ�.\n", n);
		printf("�����ݾ��� %d�Դϴ�", 1250 * n);

	}

	else if (fruit == 'b')
	{
		printf("�ٳ��� %d���� �����ϼ̽��ϴ�.\n", n);
		printf("�����ݾ��� %d�Դϴ�", 840 * n);
	}

	else if (fruit == 'm')
	{
		printf("���� %d���� �����ϼ̽��ϴ�.\n", n);
		printf("�����ݾ��� %d�Դϴ�", 2570 * n);
	}

	else if (fruit == 'p')
	{
		printf("���� %d���� �����ϼ̽��ϴ�.\n", n);
		printf("�����ݾ��� %d�Դϴ�", 1320 * n);
	}

	else
	{
		printf("�ش� ������ �����ϴ�.\n");
		printf("���� �ݾ��� 0�� �Դϴ�.");
	}


	return 0;
}