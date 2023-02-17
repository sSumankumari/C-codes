#include<stdio.h>
int main()
{
    short i,j;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            if(j>=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}