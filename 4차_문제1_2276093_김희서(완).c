#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	//%�����ڸ� ������� �ʰ� ������ ���ϱ�
	int x, y, a, b;

	printf("x�� y�� �������� �� �� a�� ������ b�� ���ϴ� ���α׷��Դϴ�.\n");

	getch();

	printf("x�� �Է��Ͻʽÿ�:");
	scanf("%d", &x);

	printf("y�� �Է��Ͻʽÿ�:");
	scanf("%d", &y);

	if (y == 0)
		printf("0���δ� ���� �� �����ϴ�");
	

	else
	{
		a = x / y;
		b = x - x / y * y;
	}

	printf("���� %d, �������� %d�Դϴ�.\n", a, b);

	getch();

	//��, �� ������ ��� ����Ͻÿ�
	int number,c,d,e;

	printf("��, �� ������ ���� �д� ���α׷��Դϴ�.\n");

	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &number);

	c = number / 100000000.0;
	d = number / 10000.0;
	e = number % 10000;

	printf("%d�� %d�� %d�� %d�Դϴ�\n", number, c, d, e);

	getch();

	//1�� 365���� ���� ��ĥ���� ���Ͻÿ�.
	int year = 0, week = 0, day = 1, f = 0;

	year = 365 * day;
	week = year/7.0;
	f = year - year / 7*7;

	printf("1�� 365���� %d�� %d���Դϴ�", week, f);


	return 0;
}