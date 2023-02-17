#include<stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter n1: ");
    scanf("%d",&n1);
    printf("Enter n2: ");
    scanf("%d",&n2);
    printf("Enter n3: ");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3)
        printf("\n The greatest no. is n1=%d",n1);
    else if(n2>n1 && n2>n3)
        printf("\n The greatest no. is n2=%d",n2);
    else if(n3>n1 && n3>n2)
        printf("\n The greatest no. is n3=%d",n3);
    return 0;
}