#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{

	int mon;

	printf("��� �� �� ������ ����Ǿ����ϱ�?");
	scanf("%d", &mon);

	if (mon >= 1 && mon < 2)

		printf("����\n");

	if (mon >= 1 && mon <= 2)

		printf("B�� ����\n");

	if (mon >=2 && mon <= 5)

		printf("�Ļ�ǳ\n");

	if (mon >= 2 && mon <= 15)

		printf("��ű���\n");


	return 0;
}
