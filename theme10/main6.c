#include <stdio.h>

int main(void)
{
    int count = 1;

    count -= 3-5;  // сначала вычислится 3-5, потом -=  ПОЛУЧАЕТСЯ 1 - (-2) == 3 

    return 0;
}