#include <stdio.h>

int main(void)
{
    int arg = 7;
    int *ptr_arg, *ptr;

    ptr_arg = &arg;
    ptr = ptr_arg;

    printf("*ptr = %d, arg = %d\n", *ptr, arg);

    *ptr_arg = 100; // изменим значения ячейки, на которую ссылается указатель

    printf("*ptr = %d, arg = %d\n", *ptr, arg);

    return 0;
}