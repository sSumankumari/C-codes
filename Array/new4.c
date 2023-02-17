// Using function multiply 2d array and store in it like matrix
#include<stdio.h>

int matrix(int *mul)
{
    printf("%d\t",*mul);
}
int main()
{
    int arr1[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    int arr2[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    int arr3[3][3];
    int i,j,k;
    for ( i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            arr3[i][j]=0;
            for(k=0;k<3;k++)
            {
                arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
            }
           matrix(&arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}