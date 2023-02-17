#include<stdio.h>

int callbyvalue(int a, int b)
{
    a++;
    b++;
    int sum=a+b;
    return sum;
}

int callbyreference(int *c, int *d)
{
    (*c)++;
    (*d)++;
    int sum=*c+*d;
    return sum; 
}

int main()
{
    int x=8;
    int y=5;
    int u=6;
    int v=3;

    printf("Using call by value,sum is:\n");
    printf("%d\n",callbyvalue(x,y));
    printf("Now x=%d and y=%d\n",x,y);

    printf("Using call by reference,sum is:\n");
    printf("%d\n",callbyreference(&u,&v));
    printf("Now u=%d and v=%d\n",u,v);
    return 0;
}