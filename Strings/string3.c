#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="hello";
    char str2[]="world";
    strcat(str1,str2);
    puts(str1);
    strupr(str1);
    puts(str1);
    return 0;
}