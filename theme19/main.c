// макропроцессор компилятора
// макросы
#include <stdio.h>

#define MENU_TRANSL 1
#define MENU_ADD 2
#define MENU_EXIT 3
#define MENU_FMT "You have selected menu item %d\n"
#define FIRST_LETTER 'A'

int main(void)
{

    int item;

    scanf("%d", item);

    switch(item) {
    case MENU_TRANSL:  // когда макрос используется так, то он уже является макровызовом 
        printf("Translate words\n");
        break;
    case MENU_ADD:
        printf("Add words\n");
        break;
    case MENU_EXIT:
        printf("Add words\n");
        break;

    return 0;

}