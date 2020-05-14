/*
This problem was asked by Airbnb.

Given a list of integers, write a function that returns the largest sum of non-adjacent numbers. Numbers can be 0 or negative.

For example, [2, 4, 6, 2, 5] should return 13, since we pick 2, 6, and 5. [5, 1, 1, 5] should return 10, since we pick 5 and 5.
*/

////////////////////////////////*NOT COMPLETED*///////////////////////////////////

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
