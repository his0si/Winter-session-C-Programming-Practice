#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	double C = 0, F = 0;

		printf("ȭ���µ��� �Է��ϼ���:");
		scanf("%lf", &F);

		C = (F - 32) * 5.0 / 9;

		printf("�����µ�:%lf\n", C);

		getch();

	double c = 0, f = 0;

		printf("�����µ��� �Է��ϼ���:");
		scanf("%lf", &c);

		f = 9.0 / 5 * c + 32;

		printf("ȭ���µ�:%lf", f);



	return 0;
}