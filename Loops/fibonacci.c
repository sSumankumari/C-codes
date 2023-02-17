#include<stdio.h>

int main()
{
    int n,i,c;
    int a=0;
    int b=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",a);
    }
    return 0;
}