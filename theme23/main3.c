#include <stdio.h>

int main(void)
{
    // 5! = 1*2*3*4*5  0! = 1

    int n = 5;
    int i = 1, p = 1;
    
    for(; i <= n; ) {
        p = p * i;
        ++i;
    }

    printf("p = %d\n", p);

    return 0;
}
