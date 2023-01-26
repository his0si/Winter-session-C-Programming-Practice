#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int i = 0;
	int ch[26];

	ch[0] = 'A';
	ch[1] = 'B' + 32;

	for (i = 0; i <= 22; i = i + 2)
	{
		ch[i + 2] = ch[i] + 2;
		printf("ch[%d]=%c\n", i, ch[i]);
	}

	for (i = 1; i <= 23; i = i + 2)
	{
		ch[i + 2] = ch[i] + 2;
		printf("ch[%d]=%c\n", i, ch[i]);
	}


	return 0;
}



