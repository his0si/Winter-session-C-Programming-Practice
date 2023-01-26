#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_integer();
int GCD(int, int);

int main(void)
{
    printf("�� ���� �Է� (a > b): \n");
    int a = get_integer();
    int b = get_integer();

    int ans = GCD(a, b);
    printf("%d�� %d�� �ִ� ������� %d\n", a, b, ans);

    return 0;
}

int get_integer()
{
    int x;
    scanf("%d", &x);
    return x;
}

int GCD(int a, int b)
{
    int ans = 0;

    for (int i = 1; i < a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}
