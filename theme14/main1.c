#include <stdio.h>

int main(void)
{
    int x;
    if(scanf("%d", &x) != 1) {  //scanf возвращает 1 или 0
        printf("Error input");
        return 0;
    }

    if(x < 0) x = -x;
    printf("x = %d\n", x);
    return 0;
}