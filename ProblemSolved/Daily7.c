/*
This problem was asked by Facebook.

Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, count the number of ways it can be decoded.

For example, the message '111' would give 3, since it could be decoded as 'aaa', 'ka', and 'ak'.

You can assume that the messages are decodable. For example, '001' is not allowed.
*/

#include <stdio.h>

#define MAX 10000

void CountCode(int i);

int Counter=1;
char NumRead[MAX];

int main()
{
	FILE* Message;
	int i=0,j=0;
	Message=fopen("EncodedMessage.txt", "r"); //This program works with a txt file called "EncodedMessage" to put in the same folder
	if(NULL==Message)
	{
		printf("/nAn error has occurred while opening the file with the message to decode.");
	}
	else
	{
		while(fscanf(Message, "%c", &(NumRead[i]))!=EOF)
		{
			i++;
			j++;
		}
		NumRead[i]='.';
		printf("\nThe coded message is: ");
		for(i=0;i<=j;i++)
		{
			printf("%c",NumRead[i]);
		}
	}
	CountCode(0);
	printf("\nThe number of possible ways to decode it is: %d",Counter);
	return 0;
}

void CountCode(int i)
{
	if(NumRead[i+1]!='.')
	{
		if(('3'==NumRead[i])||('4'==NumRead[i])||('5'==NumRead[i])||('6'==NumRead[i])||('7'==NumRead[i])||('8'==NumRead[i])||('9'==NumRead[i])
			||('2'==NumRead[i]&&'7'==NumRead[i+1])||('2'==NumRead[i]&&'8'==NumRead[i+1])||('2'==NumRead[i]&&'9'==NumRead[i+1]))
		{
			CountCode(i+1);
		}
		else
		{
			Counter++;
			CountCode(i+1);
			if(NumRead[i+2]!='.')
			{
				CountCode(i+2);
			}
		}
	}
}
