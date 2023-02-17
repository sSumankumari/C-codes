#include<stdio.h>

int main()
{
    int num;
    int count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("The number of digits in the given number is: %d",count);
    return 0;
}