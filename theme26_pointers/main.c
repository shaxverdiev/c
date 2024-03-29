//////
/////
/// УКАЗАТЕЛИ
////
//////
#include <stdio.h>

int main(void)
{
    char d = 10;

    char *gpt;  // это означает, что gpt будет переменной, которая может указывать на адрес ячейки памяти, где хранится символ типа char или последовательность символов (строка)
    gpt = &d;  // берем номер адреса(ячейки памяти) и приваиваем этот адрес переменной(указателю) gpt. Теперь в переменной gpt хранится номер ячейки памяти, в которой(в ячейке) находится значение переменной d

    // можно и так - char *gpt = &d <- это операция инициализации указателя
    // а так - gpt = &d <- указателю присваивается адрес

    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);

    *gpt = 33; //ЭТО ОПЕРАЦИЯ ПРИСВАИВАНИЯ.изменяем значение ячейки памяти, на которую ссылается указатель. То есть мы идем по этому адресу (&d) и меняем то что там было

    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);

    return 0;
}