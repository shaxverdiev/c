#include <stdio.h>

int main(void)
{
    int pass_code = 13;
    int enter_code;


    // цикл будет продолжаться до тех пор, пока пользователь не введет верный код
    do {
        printf("Please enter the secret code: ");
        scanf("%d", &enter_code);
    } while(enter_code != pass_code);  // как только пользователь введет верный код, условие в while становится ложным и цикл завершается

    // и выполняется следующий оператор после этого цикла
    printf("Access is allowed\n");
    



    return 0;
}