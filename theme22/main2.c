#include <stdio.h>

int main(void)
{
    int n;
    int s = 0;

    if (scanf("%d", &n) != 1) {  // не значение введенно с клавиатуры, а результат выполнения функции scanf(). Успешное её выполнение возвращает 1.
        printf("Error input");
        return 0;
    }

    int i = 0;
    while(++i <= n && i <= 10) {
       s += n * n;
       printf("%d\n", s);
    }

    printf("s = %d\n", s);

    return 0;
}