#include <stdio.h>

int main(void)
{
    //программа ниже завершится ошибкой, потому что неизвестно куда ссылается указатель !!! ОН МОЖЕТ ССЫЛАТЬСЯ НА УЖЕ ВЫДЕЛЕННУЮ ОБЛАСТЬ ПАМЯТИ
    // нельзя просто куда угодно записвать что либо. Нужно для начала запросить у ОС место под данные, после этого записывать туда что-то. НИКАК ИНАЧЕ
    // это называется выделение памяти. 
    // в выделенную ОС память другие программы уже ничего не могут заносить. Она только для текущей программы (пока она активна). или ПОКА НЕ БУДЕТ ОСВОБОЖДЕНА
    // после завершения программы - вся память будет освобождена

    // int *ptr;
    // *ptr = 1;

    // а эта программа завершится корректно
    int arg = 4;
    int *ptr = &arg;
    *ptr = 1;  // записываем в ячейку памяти, выделенную в строке 15 значение 1

    return 0;
}