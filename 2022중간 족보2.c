#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int n;
	char fruit, a, b, m, p;

	printf("과일 입력:");
	scanf("%c", &fruit);

	printf("개수 입력:");
	scanf("%d", &n);

	if (fruit == 'a')
	{
		printf("사과 %d개를 선택하셨습니다.\n", n);
		printf("결제금액은 %d입니다", 1250 * n);

	}

	else if (fruit == 'b')
	{
		printf("바나나 %d개를 선택하셨습니다.\n", n);
		printf("결제금액은 %d입니다", 840 * n);
	}

	else if (fruit == 'm')
	{
		printf("망고 %d개를 선택하셨습니다.\n", n);
		printf("결제금액은 %d입니다", 2570 * n);
	}

	else if (fruit == 'p')
	{
		printf("망고 %d개를 선택하셨습니다.\n", n);
		printf("결제금액은 %d입니다", 1320 * n);
	}

	else
	{
		printf("해당 과일이 없습니다.\n");
		printf("결제 금액은 0원 입니다.");
	}


	return 0;
}