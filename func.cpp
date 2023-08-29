#include <stdio.h>
#include "func.h"

const int len = 100;


char* MyStrcpy(const char* scr, char* dest)
{
    size_t i = 0;

    for (i = 0; scr[i] != '\0'; ++i)
    {
        dest[i] = scr[i];
    }

    dest[i] = '\0';
    return dest;
}

char* MyStrncpy(const char* scr, char* dest, size_t len)
{
    size_t i;
    for (i = 0; i < len && scr[i] != '\0'; ++i)
    {
        dest[i] = scr[i];
    }
    while (i < len)
    {
        dest[i] = '\0';
        ++i;
    }
    return dest;
}
