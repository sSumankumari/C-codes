#include<stdio.h>

int main()
{
    short a, b, c, d;
    a=23;
    b=1;
    c=a&b;
    d=a|b;
    printf("\n The a=%d, b=%d and c=%d",a,b,c);
    printf("\n The a=%d, b=%d and d=%d",a,b,d);
    return 0;
}