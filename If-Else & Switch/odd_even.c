#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check even or odd:");
    scanf("%d", &n);

    if (n%2==0)
    {
        printf("\n Even");
    }
    else
    {
        printf("\n Odd");
    }
    return 0;
}