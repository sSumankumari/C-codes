#include<stdio.h>
int main()
{
    short arr[10] = {0};
    short N;
    printf("Enter your number\n");
    scanf("%d",&N);
    short rem;
    while(N>0)
    {
        rem = N % 10;
        if(arr[rem] == 1)
            break;
        arr[rem] = 1;
        N = N / 10;
    }
    if(N>0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}