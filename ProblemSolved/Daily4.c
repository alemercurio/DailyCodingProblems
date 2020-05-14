/*
This problem was asked by Stripe.

Given an array of integers, find the first missing positive integer in linear time and constant space. 
In other words, find the lowest positive integer that does not exist in the array. 
The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.
*/


#include <stdio.h>

#define MAX 10

int main()
{
	float num=1;
	int dim;
	int input[MAX];
	int i;
	int low;
	int count=1;
	int found=1;
	for(i=0; (i<MAX)&&(num!=0.5); i++)
	{
		printf("\nInsert an integer (0.5 to stop): ");
		scanf("%f",&num);
		if(num!=0.5)
		{
			input[i]=num;
		}
	}
	dim=i;
	while(found==1)
	{
		found=0;
		for(i=0; i<dim; i++)
		{
			if(input[i]==count)
			{
				found=1;
			}
		}
		count++;
	}
	low=count-1;
	printf("\nThe lowest positive integer missing in the array is %d",low);
	return 0;
}
