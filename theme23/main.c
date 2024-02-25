#include <stdio.h>

int main(void)
{
    int n, s;
    scanf("%d", &n);

    // for ЦИКЛ С ПРЕД УСЛОВИЕМ (do while - с ПОСТ УСЛОВИЕМ)
    for(s = 0; n > 0; --n)
        s += n*n;

    printf("s = %d\n", s);

    return 0;
}


// // ниже такая же программа, но с использованием цикла while
// #include <stdio.h>

// int main(void)
// {
//     int n;
//     int s = 0;

//     if (scanf("%d", &n) != 1) {  // не значение введенно с клавиатуры, а результат выполнения функции scanf(). Успешное её выполнение возвращает 1.
//         printf("Error input");
//         return 0;
//     }

//     // можно ещё прописать так while(n-- > 0); тут сначала n сравнивается с нулём, потом уже уменьшается на 1.  И в теле функции сразу будет 4^2 
//     while(n > 0) {
//         printf("%d\n", n);
//         s += n * n;
//         n--;
//     }


//     printf("s = %d", s);

//     return 0;
// }


