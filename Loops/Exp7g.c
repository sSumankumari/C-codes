#include<stdio.h>

int main()
{
    int n,rem,rev=0;
    printf("Enter an integer:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("\nThe reverse order of the given integer is:%d",rev);
    return 0;
}