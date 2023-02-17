#include<stdio.h>
int main()
{
    int x=2, y=5, i;
    int val=1;
    //while(y>=1)
    //{
    //    val=x*val;
    //    y--;
    //}
    for(i=1; i<=y; i++)
    {
        val=x*val;
    }
    printf("%d",val);
    return 0;
}