#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_integer();
void divisor(int x);

int main(void)
{
    int x = get_integer();
    divisor(x);

    return 0;
}

int get_integer()
{
    int x = 0;
    printf("���� �Է�:");
    scanf("%d", &x);

    return x;
}

void divisor(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d�� ����� %d\n", x, i);
        }
    }
}