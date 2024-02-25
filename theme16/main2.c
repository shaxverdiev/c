#include <stdio.h>

int main(void)
{
    char item;

    if(scanf("%c", &item) != 1) {
        printf("Error input");

        return 0;
    }

    // char в языке С тоже целочиленное значение
    switch(item) {
        //default отработает только если не отработает ни одна из нижестоящих меток
        default:
            printf("Incorrect symbol\n");
            break; 
        case 'a':
        case 'A':
            printf("Symbol A\n");
            break;
        case 'b':
        case 'B':
            printf("Symbol B\n");
            break;
        case 'c':
        case 'C':
            printf("Symbol C\n");
            break;
    }
    
    return 0;
}