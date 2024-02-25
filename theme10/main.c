#include <stdio.h>

int main(void) {
    // пройти дебаггером, посмотреть значения
    short a = -5;
    int b = 10;
    float c = 5.4f;
    double d = -6.5;

    int res_1 = a + b;
    short res_2 = 100 - b;
    float res_3 = 5.4 - c;
    double res_4 = d * 4;

    float res_5 = 7.0 / 2.0;
    double res_6 = -9 / 2;
    float res_7 = a / c;
    double res_8 = d / b;

    return 0;
} 

