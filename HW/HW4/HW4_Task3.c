#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Hello world!";
    char string2[20]="";
    char string3[40]="";
    printf("%d\n", strlen(string1));
    printf("%d\n", strnlen(string1,4));
    printf("%d\n", strnlen(string1, 20));
    
    strcpy(string2, string1);
    printf("%s\n", string2);
    strncpy(string3, string1, 9);
    printf("%s\n", string3);

    strcat(string3, " ");
    strcat(string3, string2);
    printf("%s\n", string3);
    strncat(string3, string1, 5);
    printf("%d\n", strcmp(string1,string2));
    printf("%d\n", strcmp(string1, string3));
    return 0;
}