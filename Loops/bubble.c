#include<stdio.h>

int main()
{
	int a[5]={11,10,9,8,7};
	int i,j,temp;
    
	for(i=0;i<5;i++) //passes
	{
		for(j=0;j<5-i-1;j++) //comparisons
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}

		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}