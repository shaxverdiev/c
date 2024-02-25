// генератор псевдослучайных величин
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r_1 = rand();
    int r_2 = rand();
    
    // тут мы будем получать случайные числа, с "равной вероятностью"
    printf("%d, %d, %d, %d, %d\n", r_1, r_2, rand(), rand(), rand());

    return 0;
}