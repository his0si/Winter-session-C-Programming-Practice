#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)

{
	int x, _10 = 0, n = 0, inital;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &x);

	inital = x;

	while (inital / (int) pow(10, n) >= 1)
	{
		n++ ;
		_10 = x % 10;
		x = x / 10.0;
		printf("10^%d�� �ڸ�:%d\n", n, _10);

	}

	return 0;
}

//pow(10,n)
//_10 = x % pow(10, n);
	//_10 = x % (int)pow(10, n);