#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&i);

    while (i>0)
    {
        n=i%10;
        sum=sum+n;
        i=i/10;
    }
    printf("Total sum is= %d",sum);
    return 0;
}