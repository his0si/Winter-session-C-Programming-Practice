#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int main(void)

{
	double r,v;

	printf("������ r�� �Է��Ͻÿ�:");
	scanf("%lf", &r);

	v = r * r * PI;

	printf("���� ���� v=%6.2lf", v);


	return 0;
}