#include<stdio.h>
int main()
{
    int mo;
    printf("Enter the month number to know the no. of days:");
    scanf("%d", &mo);

    if (mo==1||mo==3||mo==5||mo==7||mo==8||mo==10||mo==12)
    {
        printf("31 days");
    }
    else if (mo==2)
    {
        printf("28 or 29 days");
    }
    else
    {
        printf("30 days");
    }
    return 0;
}