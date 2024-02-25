// спецификаторы важно сочетать с теми данными, которые будут считываться из входного потока
#include <stdio.h>

int main(void)
{
    long long var_lli = 0;

    // int res = scanf("%d", &var_lli);  // выведет не корректное значение 8(если указать число, так как long long больше чем int)
    int res = scanf("%d", &var_lli);  // эта строка выведет корректные данные

    printf("res = %d: var_lli = %lld\n", res, var_lli);

    return 0;
}