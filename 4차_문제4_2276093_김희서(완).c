#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	int a = 10, b = 15, c = 0 ;
	int i = 1;

	c = a + b;

	printf("a=%d\n", ++a);

	printf("b=%d\n", --b);

	printf("c=%d\n", --c);


	return 0;
}