#include<stdio.h>

int main()
{
    int num;
    int rem;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
        printf("%d\t",sum);
    }
    printf("\nSum of the digits in the given no. is:%d",sum);
    return 0;
}