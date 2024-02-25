#include <stdio.h>

int main(void)
{
    int s = 0;

    for(int i = 1; i <= 10; ++i)
        for(int j = 7; j >= 5; --j) {
            if(i-j > 0) // Когда условие будет истинным, сработает конструкция goto и будет "телепорт" к метке exit_sum 
                goto exit_sum; // ПРАВИЛЬНЕЕ БЫЛО ПОСТАВИТЬ ОПЕРАТОР return 0;
            s += i-j;
        }

    exit_sum: printf("s = %d\n", s);

    return 0;
}