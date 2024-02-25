// использование математических функций

#include <stdio.h>
#include <math.h>


// Эта команда включает библиотеку libm (которая содержит реализацию функции sqrt).  gcc -o your_program main4.c -lm                                                                                             
 
int main(void)
{
    double a, b, c;
    double D, x1, x2;

    if(scanf("%lf, %lf, %lf", &a, &b, &c) != 3) {
        printf("Error input\n");
        return 0;
   }

   D = b*b - 4*a*c;

   if(D < 0) {
        printf("D = %.2f < 0\n", D);
        return 0;
   }

   D = sqrt(D);  //извлекаем квадратный корень из дискриминанта

   x1 = -(b + D) / (2.0 * a);
   x2 = -(b - D) / (2.0 * a);

   printf("x1 = %.2f, x2 = %.2f\n", x1, x2);

   return 0;
}