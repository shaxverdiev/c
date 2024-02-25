#include <stdio.h>
#include <math.h>

int main(void)
{
    int a = 2, b = 2, c = 4;
    int max = (a > b) ? (a > c ? a : c) : (b > c) ? b : c;
    printf("max = %d\n", max);
    return 0;
}