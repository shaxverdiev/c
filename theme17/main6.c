//xor исключающая или
// 0 0 == 0
// 0 1 == 1
// 1 0 == 1
// 1 1 == 0
#include <stdio.h>

int main(void)
{
    unsigned char flags = 9;     //00001001
    unsigned char mask = 1;      //00000001
    
    flags = flags ^ mask;  //8 или 00001000
    flags ^= mask; // 9 или 00001001 дважды примененная маска дает исходное значение 
    printf("flags = %d\n", flags);

    return 0;
}