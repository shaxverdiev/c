#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    double y;
    scanf("%lf", &y);

    bool is_range = y >= -2 && y <= 5;  //  "или" - ||
    printf("%d\n", is_range);

    return 0; 
}