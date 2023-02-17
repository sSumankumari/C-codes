#include<stdio.h>

int main()
{
    int a;
    printf("\n Enter a number to check it is even or odd: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}