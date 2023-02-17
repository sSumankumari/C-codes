#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10]="Welcome";
    char *str2;
    strcpy(str2,str1);
    puts(str2);
    return 0;
}