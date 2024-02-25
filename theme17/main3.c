// можем проверять "включен ли бит"
#include <stdio.h>

int main(void)
{
    unsigned char flags = 11;  //00001011
    unsigned char mask = 10;  //00001010


    // проверяем, включен ли первый бит (индекс 1 то есть)
    if( (flags & mask) == mask)  //они типа накладываются друг на друга (как маска в сетях)
        printf("bit 1 is on"); //true. 3ий бит тоже включен 
    else
        printf("bit 1 is off");

    return 0;
}