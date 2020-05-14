#include <stdio.h>

#define MAX 100

int main()
{
	int list[MAX];
	int k;
	int i, j;
	int dim;
	int num;
	int done=0;
	for(i=0; (i<MAX)&&(num>0); i++)
	{
		printf("\nInsert a positive number (negative to stop): ");
		scanf("%d",&num);
		list[i]=num;
	}
	dim=i--;
	printf("\nInsert the sum number: ");
	scanf("%d",&k);
	for(i=0; (i<dim)&&(done==0); i++)
	{
		for(j=i+1; (j<dim)&&(done==0); j++)
		{
			if((list[i]+list[j])==k)
			{
				printf("\n%d+%d=%d",list[i],list[j],k);
				done=1;
			}
		}
	}
	if(done==0)
	{
		printf("\nIt is not possible to obtain %d as the sum of two numbers in the list.",k);
	}
	return 0;	
}
