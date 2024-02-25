#include <stdio.h>

#define FIVE 5
#define TEN  2 * FIVE
#define TEXT "Text message on line"
#define TEXT2 "Text message in \
one line  "
#define PRINT_D printf("digit = %d\n", digit)
#define FORMAT "digit = %d\n"

// ДИРЕКТИВА ПОЗВОЛЯЮЩАЯ ПЕРЕОПРЕДЕЛИТЬ РАНЕЕ ОПРЕДЕЛЕННЫЙ МАКРОС
#undef TEN 
// СНОВА ОПРЕДЕЛЯЕМ УЖЕ С НОВЫЙМ ЗНАЧЕНИЕМ
#define TEN 10




int main(void)
{
    int digit = FIVE;
    PRINT_D;

    digit = TEN;
    printf("FORMAT"); // ВЫВЕДЕТ ПРОСТО "FORMAT"
    printf(FORMAT, digit);
    printf(TEXT "\n");
    printf(TEXT2 "\n");

    return 0; 
}