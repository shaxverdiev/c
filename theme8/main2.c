#include <stdio.h>

int main(void)
{
    int var_i = -1283;
    double var_d = 54.3425;

    printf("[%33d]\n", var_i);
    printf("[%1f]\n", var_d);
    
    printf("[%12.7d]\n", var_i);
    printf("[%12.2f]\n", var_d);

    printf("[%#X]\n", var_i);
    printf("[%+.2f]\n", var_d);
    return 0;
}