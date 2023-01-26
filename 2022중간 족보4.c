#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
   int x, y = 0, r;
   printf("radius: ");
   scanf_s("%d", &r);

   //x^2+y^2=r^2

   for (x = -r + 1; x < r; x++)
      for (y = -r + 1; y < r; y++)
         if ((x * x + y * y) <= r * r)
            printf("(%d, %d)", x, y);
      
   return 0;
}
