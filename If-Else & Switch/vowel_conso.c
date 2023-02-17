#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet:");
    scanf("%c", &ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is consonant");
    }
    return 0;
}