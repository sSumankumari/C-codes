#include<stdio.h>

int display(int a)
{
    return a*a;
}
int main()
{
    int x=7;
    int sq=display(x);
    printf("Square of %d is %d",x,sq);
    return 0;
}