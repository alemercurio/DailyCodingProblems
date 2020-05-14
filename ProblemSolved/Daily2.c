/*
This problem was asked by Uber.

Given an array of integers, return a new array such that each element at index i of the new array 
is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. 
If our input was [3, 2, 1], the expected output would be [2, 3, 6].
*/

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
