#include<stdio.h>

int main()
{
    struct book
    {
        char name[10];
        int price;
    };
    struct book b[2];
    int i;

    for(i=0; i<2; i++)
    {
        printf("Enter values\n");
        scanf("%s %d",&b[i].name, &b[i].price);
    }

    for(i=0; i<2; i++)
    {
        printf("%s %d\n",b[i].name,b[i].price);
    }
    return 0;
}