#include<stdio.h>

int display(int a)
{
    return a*a;
}

int main()
{
    int x=10;
    int sq = display(x);
    printf("square of %d is %d",x,sq);
    return 0;
}