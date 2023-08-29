#include <stdio.h>
#include "func.h"


const int len = 100;

int main()
{
    char scr[len];
    scanf("%s", scr);

    char dest[len];
    size_t len = 5;
    MyStrncpy(scr, dest, len);

    printf("%s\n", dest);

    return 0;
}


