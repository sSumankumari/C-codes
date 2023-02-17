#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("Enter your number:\n");
    scanf("%d",&num);
    int org=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        //printf("the reversed no. is: %d\t",rev);
        //printf("my number is:%d\n",num);
    }
    if(org==rev)
    {
        printf("Palindrom:\n");
    }
    else
    {
        printf("Not Palindrom:\n");
    }
    return 0;
}