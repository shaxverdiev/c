#include <stdio.h>

int main(void)
{
    char byte;
    
    int count = scanf("%c", &byte); // & (амперсанд) - возвращает АДРЕС ПЕРЕМЕННОЙ "byte", "byte" - промежуточное значение, где будет храниться значение введенно с клавиатуры
    printf("count = %d, byte = %c\n", count, byte);

    return 0;
}