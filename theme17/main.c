#include <stdio.h>

int main(void)
{
    unsigned char var = 153;  // двоичная запись 10011001
    unsigned char not_v = ~var;  // результат: 01100110 (число 102) инверсия   "~"(тильда) --- это битовая операция НЕ      

    printf("var = %d, not_v = %d\n", var, not_v);

    return 0;
}