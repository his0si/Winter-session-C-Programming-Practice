#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int x, _5, y;

	printf("���� �ݾ��� �Է��Ͻÿ�(����):");
	scanf("%d", &x);
	
	printf("���� �ݾ� �� 5���� �� �ż�:");
	scanf("%d", &_5);

	y = x - (5 * _5);

	printf("���� �ݾ�:%d(����)\n", x);
	printf("5���� ��:%d ��\n", _5);
	printf("1���� ��:%d ��\n", y);

	
	return 0;
}