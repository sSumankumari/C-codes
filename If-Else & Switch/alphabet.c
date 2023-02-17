#include<stdio.h>
int main()
{
    char alp;
    printf("Enter a character:");
    scanf("%c", &alp);

    if ((alp>='a' && alp<='z')||(alp>='A' && alp<='Z'))
    {
        printf("It is an alphabet");
    }
    else
    {
        printf("It is not an alphabet");
    }
    return 0;
}