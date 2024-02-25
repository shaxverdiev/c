// определение параметров при макроопределениях 

#include <stdio.h>

#define SQ_PR(A, B) A * B //маерос функция // (A,B) -- ЭТО НЕ ПЕРЕМЕННЫЕ ! ПОД НИХ НЕ ВЫДЕЛЯЕТСЯ ПАМЯТЬ.  SQ_PR != 6 | SQ_PR == 2*3

int main(void)
{
    int res = SQ_PR(2,3);  //6
    printf("res = %d\n", res);

    return 0;
}