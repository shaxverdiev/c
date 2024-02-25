#define LANG_C


#if defined(LANG_C)
#   include <stdio.h>
#else
#   include <iostream>
#endif


int main(void)
{
    int x = 5;
#ifdef LANG_C               // ifdef сокращения от ifdefined
    printf("Hello, WOrld\n");
#else
    std::cout << x << std::endl;
#endif
    return 0;
}
