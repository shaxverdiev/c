#include <stdio.h>

int main(void)
{
    // 5! = 1*2*3*4*5  0! = 1

    int n = 5, p = 1;

    for(int i = 1; i <= n; ++i) {
        p = p * i;
    }

    printf("p = %d\n", p);

    return 0;
}
