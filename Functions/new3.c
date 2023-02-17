// length of string without using strlen
#include<stdio.h>
/*
int main()
{
    //char str[10];
    //printf("Enter your name: ");
    //scanf("%s", str);
    //printf("%s\n", str)
    //int length = 0;
    //int i=0;
    //while(str[i]!='\0')
    //{
    //    length = length + 1;
    //    i++;
    //}
    //printf("Length of your name is %d", length);
    
    char str[]="Welcome";
    int len=0, i=0;
    while(str[i]!=0)
    {
        len = len + 1;
        i++;
    }
    printf("Length of string is %d",len);
    return 0;
}*/

int count_length(char str[])
{  
    int count=0;
    for(int i=0; str[i]!=0; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[]="Suman";
    printf("Length is %d",count_length(name));
    return 0;
}

