#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);

    if(x < 5) x = -x;
    printf("x = %d\n", x);

    return 0;
}