#define _SECURE_NO_WARNING
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

int main(void)

{
	int i;

	srand((unsigned)time(NULL));
	for (i = 0; i <= 5; i++)
		printf("%d", 1 + rand() % MAX);//������ ������ �ٸ� ������ ���




	return 0;
}