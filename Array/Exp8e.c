#include<stdio.h>

int main()
{
    int arr1[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    int arr2[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    int arr3[3][3];
    int i,j;
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            arr3[i][j]=arr1[i][j]*arr2[i][j]+arr1[i][j+1]*arr2[i+1][j]+arr1[i][j+2]*arr2[i+2][j];
        }
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}