#include<stdio.h>

int main()
{
    int n,i,p=0;
    printf("Enter your number:");
    scanf("%d",&n);
    if(n==0||n==1)
        p=1;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            p=1;
            break;
        }
    }
    if(p==0)
        printf("%d is a prime no.",n);
    else
        printf("%d is not a prime no.",n);
    return 0;
}