#include<stdio.h>

int Recurs_sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+Recurs_sum(n-1);
}

int main()
{
    int n=10;
    int sum = Recurs_sum(n);
    printf("Sum is %d\n", sum);
    return 0;
}