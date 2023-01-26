#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int get_integer();


int main(void)

{
	printf("값의 범위 a,b (a < b) 입력:");
	int a = get_integer();
	int b = get_integer();


	printf("랜덤 번호 갯수:");
	int n = get_integer();

	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		printf("%d", rand() % (b - a + 1) + a);



	return 0;
}


int get_integer()
{
	int x;
	scanf("%d", &x);
	return x;
}

