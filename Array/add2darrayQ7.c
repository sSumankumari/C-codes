#include<stdio.h>
#include<conio.h>

int main()
{
    int arr1[3][3]={{1,2,3},{4,5,6},{7,9,0}};
    int arr2[3][3]={{8,9,2},{1,3,4},{7,6,5}};
    int arr3[3][3];
    int i,j;

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }

    //for(i=0; i<=2; i++)
    //{
    //    for(j=0; j<=2; j++)
    //    {
    //        printf("%d\t", arr3[i][j]);
    //    }
    //    printf("\n");
    //}
    return 0;
}