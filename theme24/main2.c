#include <stdio.h>

int main(void)
{
    int pass_code = 13;
    int enter_code;
    int c;

    do {
        printf("Please enter secret code: ");
        scanf("%d", &enter_code);

        while((c = getchar()) != '\n' && c != EOF)
            {}
    } while(enter_code != pass_code);

    printf("Access is allowed\n");

    return 0;
}