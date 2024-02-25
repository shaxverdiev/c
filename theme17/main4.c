// выключение битов
#include <stdio.h>

int main(void)
{
    unsigned char flags = 13;     //00001101
    unsigned char mask = 5;       //00000101
    
    flags = flags & ~mask;  //8 или 00001000
    printf("flags = %d\n", flags);

    return 0;
}