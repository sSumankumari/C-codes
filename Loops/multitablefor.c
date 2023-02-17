#include<stdio.h>

int main()
{
    int n,i;
    n=2;
    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\t",n,i,n*i);
    }
    return 0;
}