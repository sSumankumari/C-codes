#include<stdio.h>

int main()
{
    int arr[5];
    int i,sum;
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
        //arr[i]=arr[i]*arr[i];
    }
    //for(i=0; i<5; i++)
    //{
    //    printf("%d\t",arr[i]);
    //}
    for(i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    printf("\n%d",sum);
    return 0;
}