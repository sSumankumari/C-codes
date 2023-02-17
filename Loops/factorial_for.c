#include<stdio.h>

int main()
{
    int n=6,i;
    int fact=1;
    for(i=n; i>=1; i--)
    {
        fact=fact*i;
        //printf("The factorial of %d is: %d\n",n,fact);
    }
    printf("The factorial of %d is: %d",n,fact);
    return 0;
}