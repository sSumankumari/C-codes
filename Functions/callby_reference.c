#include<stdio.h>

void dosum(int *x, int *y)
{
    int c;
    (*x)++;
    (*y)++;
    c=(*x)+(*y);
    printf("\nThe sum is %d",c);
}

int main()
{
    int a=10, b=20;
    dosum(&a, &b);
    printf("\nThe actual a=%d",a);
    printf("\nThe actual b=%d",b);
    return 0;
}