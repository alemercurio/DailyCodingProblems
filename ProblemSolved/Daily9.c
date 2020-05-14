#include <stdio.h>

#define MAX 10

int main()
{
	int input[MAX-1];
	int i;
	int sum;
	for(i=0; i<MAX; i++)
	{
		printf("\nInsert a integer: ");
		scanf("%d",&input[i]);
	}
	printf("\n[ ");
	for(i=0; i<MAX; i++)
	{
		printf("%d, ",input[i]);
	}
	printf("]");
	while(input[i]<=0)
	{
		i++;
		if(input[i]>0);
		{
			for(j=i+2; j<MAX; j++)
			{
					
			}
		}
	}
	return 0;
}
