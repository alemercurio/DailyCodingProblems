#include <stdio.h>

#define MAX 10

int main()
{
	int original[MAX];
	int result[MAX];
	int i;
	int j;
	int num;
	int dim;
	int product;
	for(i=0; (i<MAX)&&(num>=0); i++)
	{
		printf("\nInsert a positive value (negative to stop): ");
		scanf("%d",&num);
		original[i]=num;
	}
	dim=i-1;
	for(i=0; i<dim; i++)
	{
		product=1;
		for(j=0; j<dim; j++)
		{
			if(j!=i)
			{
				num=original[j];
				product=product*num;
			}
		}
		result[i]=product;
		printf("\n%d",result[i]);
	}
	return 0;
}
