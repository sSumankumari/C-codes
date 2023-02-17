#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Welcome";
    char *str1;
    str1=str;
    strupr(str);
    puts(str);
    strlwr(str1);
    puts(str1);

    //char str[]="Welcome";
    //char *str1;
    //str1=str;
    //strupr(str);
    //printf("%s\n",str);
    //strlwr(str1);
    //printf("%s\n",str1);
    return 0;

}