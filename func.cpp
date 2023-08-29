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

int MyStrcmp(const char* scr, const char* dest) {
    size_t i = 0;
    while (scr[i] != '\0' && dest[i] != '\0') {
        if (scr[i] != dest[i]) {
            return scr[i] - dest[i];
        }
        ++i;
    }
    return scr[i] - dest[i];
}


int MyStrncmp(const char* scr, const char* dest, size_t len) {
    size_t i;
    for (i = 0; i < len; ++i) {
        if (scr[i] != dest[i] || scr[i] != '\0') {
            return scr[i] - dest[i];
        }
    }
    return 0;
}

int MyStrchr(const char* scr, char ch)
{
    size_t i = 0;
    while (scr[i] != '\0' && scr[i] != ch) {
        ++i;
    }
    if (scr[i] == ch) {
        return i;
    } else {
        return -1;
    }
}
