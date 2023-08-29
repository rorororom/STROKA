#include <stdio.h>
#include <string.h>
#include "func.h"


const int len = 100;

int main()
{
//     char scr[len] = "";
//     char dest[len] = "";
//     scanf("%s", scr);
//     MyStrcpy(scr, dest);
//     printf("%s\n", dest);
//
//     //--------------------------------------------------------
//
//     char scr[len] = "";
//     char dest[len] = "";
//     scanf("%s", scr);
//     int len = 0;
//     printf("%d", &len);
//     MyStrncpy(scr, dest, len);
//     printf("%s\n", dest);
//
//     //--------------------------------------------------------
//
//     char scr[len] = "";
//     scanf("%s", scr);
//     printf("%d\n", MyStrlen(scr));
//
//     //--------------------------------------------------------
//
//     char scr[len] = "";
//     char dest[len] = "";
//     scanf("%s", scr);
//     scanf("%s", dest);
//     if (MyStrcmp(scr, dest) == 0)
//     {
//         printf("str1 == str2\n");
//     }
//     else if (MyStrcmp(scr, dest) > 0)
//     {
//         printf("str1 > str2\n");
//     }
//     else
//     {
//         printf("str1 < str2\n");
//     }
//
//     //--------------------------------------------------------
//
//     char scr[len] = "";
//     char dest[len] = "";
//     scanf("%s", scr);
//     scanf("%s", dest);
//     int len = 0;
//     scanf("%d", &len);
//     int result = MyStrncmp(scr, dest, len);
//
//     if (result < 0)
//     {
//         printf("str1 < str2\n");
//     }
//     else if (result > 0)
//     {
//         printf("str1 > str2\n");
//     }
//     else {
//         printf("str1 == str2\n");
//     }
//
//     return 0;

    //--------------------------------------------------------
    char scr[len] = "";
    scanf("%s", scr);
    char ch;
    scanf(" %c", &ch);
    int answer = MyStrchr(scr, ch);
    if (answer == -1)
    {
        printf("character not found");
    }
    else
    {
        printf("%d\n", answer);
    }

}


