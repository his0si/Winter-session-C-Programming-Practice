#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define EXCHANGE_RATE 1120//��ȣ��� 1�� ����-��ȣ ����� ���� ������ ���� ���� ���� ����ϴ� �� ���� ��

const int EXCHANGE_RATt = 1121;//��ȣ��� 2�� ����

/*����) 2���� 8���� 16���� ��� �����غ���
2������ 2�� ������ ���ؼ� ���� ����� ����
ex 3�� ���������� 0011�̹Ƿ�
-3��1101���� ǥ��*/

int  main(void)

{
	int x=3;
	int y = -3;//������ 2�� ������ ǥ�� �Ǵ��� �˾ƺ���

	printf("x=%08X\n",x);//8�ڸ��� 16������ ����Ѵ�
	printf("y=%08X\n", y);
	printf("x+y=%08X\n", x + y);

	char code1 = 'A';//���� ����� �ʱ�ȭ
	char code2 = 65;//�ƽ�Ű �ڵ�� �ʱ�ȭ
	
	printf("code1=%c\n", code1);
	printf("code2=%c\n", code2);

	





	return 0;
}