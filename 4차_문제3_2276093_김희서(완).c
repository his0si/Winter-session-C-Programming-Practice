#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int  main(void)

{
	double a, b, c;
	double x1 = 0, x2 = 0;


	printf("2�� ������ ax^2+bx+c=0�� �ظ� ���ϴ� ���α׷��Դϴ�\n");

	printf("��� a���� �Է��Ͻÿ�:");
	scanf("%lf", &a);

	printf("��� b���� �Է��Ͻÿ�:");
	scanf("%lf", &b);

	printf("��� c���� �Է��Ͻÿ�:");
	scanf("%lf", &c);

	
	if (a == 0)
		printf("x=%lf", -c / b);

	else 
	{

		if (b * b - 4 * a * c > 0)
		{

			x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
			x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;

			printf("x=%lf and x=%lf", x1,x2);
		}

		else if (b * b - 4 * a * c == 0)
		{
			x1 = -b / 2 * a;

			printf("x=%lf", x1);

		}
		else 
			printf("2�� �������� �Ǳ��� �������� �ʽ��ϴ�.");

	}

	return 0;
}