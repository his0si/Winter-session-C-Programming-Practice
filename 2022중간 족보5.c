#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, n;
    char ch;

    printf("���� �Է� : ");
    scanf("%c", &ch);

    printf("���� �Է� : ");
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
        printf("�������� �ʴ� ��ȣ�Դϴ�.");
   
    return 0;
}