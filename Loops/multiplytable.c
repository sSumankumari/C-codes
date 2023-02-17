#include<stdio.h>
int main()
{
    int i,num,P;
    printf("Enter a number of which you want table:");
    scanf("%d",&num);
    
    for (i=1; i<=10; i++)
    {
        P=num*i;
        printf("%d*%d=%d\n",num,i,P);
    }
    return 0;
}