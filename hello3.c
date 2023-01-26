#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define EXCHANGE_RATE 1120//기호상수 1번 버전-기호 상수는 유지 보수가 숫자 값을 직접 사용하는 것 보다 편리

const int EXCHANGE_RATt = 1121;//기호상수 2번 버전

/*숙제) 2진수 8진수 16진수 계산 연습해보기
2진수로 2의 보수를 구해서 음수 만들어 보자
ex 3은 이진법으로 0011이므로
-3은1101으로 표현*/

int  main(void)

{
	int x=3;
	int y = -3;//음수가 2의 보수로 표현 되는지 알아보자

	printf("x=%08X\n",x);//8자리의 16진수로 출력한다
	printf("y=%08X\n", y);
	printf("x+y=%08X\n", x + y);

	char code1 = 'A';//문자 상수로 초기화
	char code2 = 65;//아스키 코드로 초기화
	
	printf("code1=%c\n", code1);
	printf("code2=%c\n", code2);

	





	return 0;
}