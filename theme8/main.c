#include <stdio.h>

int main(void)
{
    short var_h = 100;
    int var_i = 1024;
    long double var_ld = 0.5;

    printf("var_h = %d, var_i = %d, %Lf\n", var_h, var_i, var_ld);
    
    return 0;
}

