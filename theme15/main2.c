#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("x is %s digit\n", (x % 2 == 0) ? "EVEN" : "OOODDD"); 

    return 0;
}