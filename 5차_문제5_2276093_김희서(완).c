#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{

	int mon;

	printf("Ãâ»ý ÈÄ ¸î °³¿ùÀÌ °æ°úµÇ¾ú½À´Ï±î?");
	scanf("%d", &mon);

	if (mon >= 1 && mon < 2)

		printf("°áÇÙ\n");

	if (mon >= 1 && mon <= 2)

		printf("BÇü °£¿°\n");

	if (mon >=2 && mon <= 5)

		printf("ÆÄ»óÇ³\n");

	if (mon >= 2 && mon <= 15)

		printf("Æó·Å±¸±Õ\n");


	return 0;
}
