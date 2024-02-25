#include <stdio.h>

int main(void)
{
    double height, a;

    int res = scanf("%lf %lf", &height, &a);
    if(res != 2) {
        printf("Error");
        return 0;
    }

    double sq = height * a / 2.0;
    printf("%.2f\n", sq);

    return 0;
}