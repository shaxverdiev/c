#include <stdio.h>

int main(void)
{
    unsigned char flags = 5;  // двоичная запись 00000101
    unsigned char mask = 4;  // двоичная запись 000000100

    unsigned char res = flags & mask;

    printf("res = %d\n", res);  //res ==  4 почему ? 0 и 0 == 0, ..... 1 и 1 == 1..... итого 00000100 == 4

    return 0;
}



