#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int num[100];
    int even = 0, odd = 0;

    for (int i = 0; i < 100; i++) 
    {
        num[i] = (rand() % 100) + 1;  
        printf("num[%03d] =%3d ", i, num[i]);

        if (i % 10 == 9)
        {
            printf("\n");
        }

        if (i % 2 == 0)
        {
            even = even + num[i];
        }
        else
        {
            odd = odd + num[i];
        }
    }

    printf("\nÈ¦¼ö ÀÎµ¦½º ÇÕ: %d\n", odd);
    printf("Â¦¼ö ÀÎµ¦½º ÇÕ: %d\n\n", even);

    return 0;
}