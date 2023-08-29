#include <stdio.h>
const int len = 3;
char* MyStrcpy(const char* scr, char* dest);

int main()
{
    char scr[]="ABC";
    char dest[] = "";
    int size = sizeof(scr) / sizeof(scr[0]);
    MyStrcpy(scr, dest);
    printf("%s\n", dest);
}

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
