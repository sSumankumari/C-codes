#include<stdio.h>

int main()
{
    char ch;
    printf("\n Enter a character: ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("Vowel");
                break;
            default:
                printf("Consonant");
                break;
        }
    }
    else
    {
        printf("Syntax error");
    }
    return 0;
}