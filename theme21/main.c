// #include <stdio.h>  -- файл сначала ищется в системных каталогах, потом в текущем рабочем
// #include "stdio.h"  -- файл сначала ищется в текущем  рабочем каталоге, потом в системных
int printf(const char *format, ...);  //компиляторы этого достаточно

int main(void)
{
    printf("Hello, World!\n");
    return 0;
}