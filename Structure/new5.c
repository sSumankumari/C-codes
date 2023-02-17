// Comparing books by page no. and printing in ascending order of pages
#include<stdio.h>
#include<string.h>

int main()
{
	struct book
	{
		char name[10];
		int pages;
	};
	struct book b[3];
	struct book temp[3];

	for(int i=0; i<3; i++)
	{
		printf("Enter book details: name and pages\n");
		scanf("%s %d", &b[i].name, &b[i].pages);
	}
	// now comparing with page no.
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3-i-1; j++)
		{
			if(b[j].pages>b[j+1].pages)
			{
			    temp[j] = b[j];
				b[j] = b[j+1];
				b[j+1] = temp[j];
			}			
		}
	}
	// display
	for(int i=0; i<3; i++)
	{
		printf("%s, %d pages\n", b[i].name, b[i].pages);
	}

	return 0;
}