#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	char i=0, d=0, c=0;
	int x, y, n;

	printf("i or d�� �Է��Ͻÿ�:");
	scanf("%c", &c);

	printf("n�� �Է��Ͻÿ�:");
	scanf("%d", &n);

	if (c == 'i')
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y <= x; y++)
				printf("*");
			printf("\n");


		}
	}

	else if (c == 'd')
	{
		for (x = n; x <= n && x > 0; x--)
		{
			for (y = 0; y < x; y++)
				printf("*");
			printf("\n");
		}
	}

	else
		printf("�������� �ʴ� ��ȣ�Դϴ�.");



	return 0;
}