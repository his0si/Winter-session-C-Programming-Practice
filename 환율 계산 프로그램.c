#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	int x;//ȯ��
	int won;//��ȭ
	int dol;//�޷�ȭ
	
	printf("ȯ���� �Է��Ͻÿ�:");
	scanf("%d", &x);

	printf("��ȭ �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &won);

	printf("��ȭ %d���� %d�޷��Դϴ�.", won, won/x);
	



	return 0;
}