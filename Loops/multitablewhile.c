#include<stdio.h>

int main()
{
    int n=2;
    int i=1;
    while(i<=10)
    {
        printf("%d*%d=%d\t",n,i,n*i);
        i++;
    }
    return 0;
}