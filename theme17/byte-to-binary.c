#include <stdio.h>

void printBinary(unsigned char byte) {
    int i;
    for (i = 7; i >= 0; i--) {
        printf("%d", (byte & (1 << i)) ? 1 : 0);
    }
    printf("\n");
}

int main() {
    unsigned char byte;
    
    printf("Введите значение байта: ");
    scanf("%hhu", &byte);

    printf("Двоичное представление байта: ");
    printBinary(byte);

    return 0;
}
