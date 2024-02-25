#include <stdio.h>
#include <stdbool.h>


// пройтись дебаггером
int main(void)
{
    int x = 5;
    bool is_correct = x % 2 == 0 || x % 3 == 0 && x > 5;

    int y = 15;
    bool is_correct2 = (y % 2 == 0 || y % 3 == 0) && y > 5;

    bool is_correct3 = x != 0 && 10 / x > 1;

    return 0;
}