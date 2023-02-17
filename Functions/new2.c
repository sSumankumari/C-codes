// Sum of elements of array using function
#include<stdio.h>

int sum_of_array(int arr[])
{
    int sum =0;
    for(int i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int sum = sum_of_array(arr);
    printf("Sum is %d", sum);
    return 0;
}