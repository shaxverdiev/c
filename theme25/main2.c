#include <stdio.h>

int main(void)
{   
    int x, s = 0;

    while(scanf("%d", &x) == 1 && x != 0) {
        // Если число которое мы ввели с клавиатуры оказалось четным, тогда срабатывает операция "continue" и весь код, который находится ниже этого оператора - ПРОПУСКАЕТСЯ НА ТЕКУЩЕЙ ИТЕРАЦИИ
        if(x % 2 == 0)
            continue;

        s += x;
    }

    printf("s = %d\n", s);



    return 0;
}