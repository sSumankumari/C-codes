#include<stdio.h>

int main()
{
	struct book
	{
		int pages;
		char *name;

	};
	struct book b[3];
	struct book temp;
	int i,j;
	
	for(i=0;i<3;i++)
	{
		printf("\n Enter book detail - name,pages\n");
		scanf("%s %d",&b[i].name,&b[i].pages);
		//scanf("%d",&b[i].pages);
		//gets(b[i].name);
	}
	//code to perform sorting by pages member
	for(i=0;i<3;i++)
	{
		for(j=0;j<3-i-1;j++)
		{
			if(b[j].pages >b[j+1].pages)
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
			printf("\nname=%s,pages=%d",b[i].name,b[i].pages);
		}
	}
	//display
	for(i=0;i<3;i++)
	{
		printf("\npages=%d,name=%s",b[i].pages,b[i].name);
	}
    return 0;
}