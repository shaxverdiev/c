// битовая оперция или
// битовая операция или соответствует простому арифметическому сложению
#include <stdio.h>

int main(void)
{
    unsigned char flags = 8;     //00001000
    unsigned char mask = 5;      //00000101
    
    flags = flags | mask;  //13 или 0001101
    printf("flags = %d\n", flags);

    return 0;
}