#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, n;
    char ch;

    printf("방향 입력 : ");
    scanf("%c", &ch);

    printf("개수 입력 : ");
    scanf("%d", &n);

    if (ch == 'i')
    {
        for (y = 1; y <= n; y++)
        {
            for (x = 0; x < y; x++)
                printf("*");
            printf("\n");

        }

    }

    else if (ch == 'd')
    {
        for (y = n; y <= n && y >= 0; y--)
        {
            for (x = 0; x < y; x++)
                printf("*");
            printf("\n");
        }

    }

    else 
        printf("지원하지 않는 기호입니다.");
   
    return 0;
}