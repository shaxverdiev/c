// генератор псевдослучайных величин
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{  
    time_t t = time(NULL); 
    srand(t); // t в аргументах говорит о том, что последовательнотсь псевдослучайных чисел будет всегда разной
    // srand(10)  // статическое значение в аргументах давало бы нам всегда один и тот же набор псевдослучайных чисел.

    int r_1 = rand();
    int r_2 = rand();
    
    printf("%d, %d, %d, %d, %d\n", r_1, r_2, rand(), rand(), rand());

    return 0;
}