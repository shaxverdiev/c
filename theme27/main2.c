#include <stdio.h>

int main(void)
{
    int arg = 777;
    int *ptr_arg;
    char *ptr; 

    ptr_arg = &arg;
    ptr = (char *)ptr_arg;  // приводим тип одного указателя к типу другого указателя

    *ptr = 1;
    printf("*ptr_arg = %d, arg = %d\n", *ptr_arg, arg);  //в ячейке arg знчение изменится на 769 //ЭТО ПРОИЗОШЛО ПОТОМУ ЧТО !!! *ptr имеет тип char

    return 0;
} 