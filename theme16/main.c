#include <stdio.h>
#include <math.h>

int main(void)
{
    int item;

    printf("1. Learn C lang\n"
           "2. Learn Python lang\n"
           "3. Learn Go lang\n"
           "4. Learn Java lang\n"
           "5. Learn C++ lang\n"
           "6. Exit\n");

    if(scanf("%d", &item) != 1) {
        printf("Error input");
        return 0;
    }


    // в switch(item) - могут быть только целочисленные значения
    // если break, Instr.Pointer выходит из switch'а и выполняет дальнеший код, ЕСЛИ будет return 0; Тогда код завершит свою работы (switch лучше использовать в функциях)
    switch(item) {
        case 1:
            printf("C\n");
            break;  // или return 0;
        case 2:
            printf("Python\n");
            break;  // или return 0;
        case 3:
            printf("Go\n");
            break;  // или return 0;
        case 4:
            printf("Java\n");
            break;  // или return 0;
        case 5:
            printf("C++\n");
            break;  // или return 0;
        case 6:
            printf("Exit\n");
            break;  // или return 0;

        // return 0;
    }

    printf("Good job!\n");

    return 0;
}