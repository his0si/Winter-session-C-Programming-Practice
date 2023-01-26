#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)

{
	double C = 0, F = 0;

		printf("È­¾¾¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä:");
		scanf("%lf", &F);

		C = (F - 32) * 5.0 / 9;

		printf("¼·¾¾¿Âµµ:%lf\n", C);

		getch();

	double c = 0, f = 0;

		printf("¼·¾¾¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä:");
		scanf("%lf", &c);

		f = 9.0 / 5 * c + 32;

		printf("È­¾¾¿Âµµ:%lf", f);



	return 0;
}