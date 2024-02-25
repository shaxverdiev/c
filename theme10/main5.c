// инеркмент, декремент
#include <stdio.h>

int main(void)
{
    int count = 0, size = 5;

    // int current = count++;  // префиксная форма --- сначала присваивается старое значение
    // int width = ++size; // постфиксная форма --- сначала увеличивается число
    
    int current = count++;
    int width = --size;

    int p = 2 * size++;
    int r = 3 * --width;
    


    printf("count = %d, size = %d, current = %d, width = %d\n", count, size, current, width);

    return 0;
}