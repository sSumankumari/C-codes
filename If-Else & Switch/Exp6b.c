#include<stdio.h>

int main()
{
    int a;
    printf("\n Enter month no.: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days");
            break;
        case 2:
            printf("29 days");
            break;
        default:
            printf("30 days");
    }
    return 0;
}