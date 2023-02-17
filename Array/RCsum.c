#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    int i,j;
    int row_sum=0;
    int column_sum=0;

    printf("Sum of row is:\t");
    for(i=0; i<=4; i++)
    {
        for(j=0; j<=4; j++)
        {
            row_sum+=arr[i][j];
        }
        printf("%d\t",row_sum);
        row_sum=0;
    }
    printf("\n");
    printf("Sum of column is:\t");
    for(i=0; i<=4; i++)
    {
        for(j=0; j<=4; j++)
        {
            column_sum+=arr[j][i];
        }
        printf("%d\t",column_sum);
        column_sum=0;
    }
    return 0;
}