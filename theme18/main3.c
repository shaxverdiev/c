// как сформировать случайные числа произвольного диапазона
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{  
    srand(time(NULL));

    int range = 10;
    
    int r_1 = rand() % range;  // [0; range] range(10) не будет входить в диапазон
    int r_2 = rand() % range - 5;  // [-5; range-5]  <---- (-5) СДВИГАЕТ ДИАПАЗОН НА 5 ЕДИНИЦ ВЛЕВО

    int r_3 = rand() + rand(); // диапазон увеличивается в 2 раза 

    double range_float = (double)rand() / (double)RAND_MAX;  // [0; 1] это диапазон вещественных чисел
    
    
    printf("%d, %d, %.5f\n", r_1, r_2, range_float);  

    return 0;
}