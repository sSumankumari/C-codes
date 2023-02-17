// Printing elements of array using function
#include<stdio.h>

void print_elements(int *ptr)
{
    printf("%d\t", *ptr);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for(int i=0; i<5; i++)
    {
        print_elements(&arr[i]);
    }
    return 0;
}