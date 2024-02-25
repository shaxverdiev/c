#include <stdio.h>

int main(void)
{
    int digit;
    scanf("%d", &digit);

    // деление по модулю (проверка на четное число)
    int res = digit % 2;
    printf("res = %d\n", res);

    return 0;
}
