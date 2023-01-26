#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int x, _5, y;

	printf("인출 금액을 입력하시오(만원):");
	scanf("%d", &x);
	
	printf("인출 금액 중 5만원 권 매수:");
	scanf("%d", &_5);

	y = x - (5 * _5);

	printf("지급 금액:%d(만원)\n", x);
	printf("5만원 권:%d 장\n", _5);
	printf("1만원 권:%d 장\n", y);

	
	return 0;
}