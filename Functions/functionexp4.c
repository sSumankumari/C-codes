#include<stdio.h>

int fact(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n = 4;
    int factorial = fact(n);
    printf("Factorial of %d is %d",n,factorial);
    return 0;
}