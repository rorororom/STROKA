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

int MyStrlen(char* scr)
{
    size_t i = 0;
    while (scr[i] != '\0')
    {
        ++i;
    }
    return i;
}

int MyStrcmp(char* scr, char* dest)
{
    int str1 = MyStrlen(scr);
    int str2 = MyStrlen(dest);
    if (str1 == str2)
    {
        return 0;
    }
    return str1 - str2;
}

int MyStrncmp(const char* str1, const char* str2, size_t len) {
    for (size_t i = 0; i < len; ++i) {
        if (str1[i] != str2[i] || str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
    }
    return 0;
}
