#include<stdio.h>

int main()
{
    int arms=153, rem, sum=0;
    int check=arms;
    while(check>0)
    {
        rem=check%10;
        sum=sum+rem*rem*rem;
        check=check/10;
    }
    printf("%d\n",sum);
    
    if(sum==arms)
    {
        printf("It is armstrong no.");
    }
    else
    {
        printf("It is not an armstrong no.");
    }
    return 0;
}

//int main()
//{
//    short arms = 153;
//    short digit;
//    short sum = 0;
//    short check = arms;
//
//    while(check != 0)
//    {
//        digit = check % 10;
//        sum = sum + (digit*digit*digit);
//        check = check / 10;
//    }
//    printf("%d\n", sum);
//    if(sum == arms)
//    {
//        printf("%d is an armstrong no.", arms);
//    }
//    else
//    {
//        printf("%d is not an armstrong no.", arms);
//    }
//    return 0;
//}