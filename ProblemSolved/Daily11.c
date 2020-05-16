/*
This problem was asked by Twitter.

Implement an autocomplete system. That is, given a query string s and a set of all possible query strings, 
return all strings in the set that have s as a prefix.

For example, given the query string de and the set of strings [dog, deer, deal], return [deer, deal].
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

typedef struct el {
	char String[MAX];
	struct el* Next;
} ListEl;
typedef ListEl* List;

int main ()
{
	FILE* Dictionary;
	List ListOfS, Pointer, Found, FoundPointer;
	char Prefix[MAX];
	int i;
	int FoundBoo;
	Dictionary=fopen("Dictionary.txt", "r");
	printf("\nInsert the prefix to find: ");
	scanf("%s", Prefix);
	if(NULL==Dictionary)
	{
		printf("/nAn error has occurred while opening the file with the set of all possible strings."); //The strings must be \n separated
	}
	else
	{
		ListOfS=malloc(sizeof(ListEl));
		Pointer=ListOfS;
		while(fgets(Pointer->String, MAX, Dictionary)!=NULL)
		{
			printf("\nString: %s",Pointer->String);
			Pointer->Next=malloc(sizeof(ListEl));
			Pointer=Pointer->Next;
		}
	}
	printf("\n");
	Pointer=ListOfS;
	Found=malloc(sizeof(ListEl));
	FoundPointer=Found;
	while(Pointer!=NULL)
	{
		i=0;
		FoundBoo=1;
		while((FoundBoo==1)&&(Prefix[i]!=NULL))
		{
			if((Pointer->String[i])!=Prefix[i])
			{
				FoundBoo=0;
			}
			i++;
		}
		if(FoundBoo==1)
		{
			strcpy(FoundPointer->String, Pointer->String);
			printf("\nPrefix found in: %s",FoundPointer->String);
			FoundPointer->Next=malloc(sizeof(ListEl));
			FoundPointer=FoundPointer->Next;
		}
		Pointer=Pointer->Next;
	}
	free(FoundPointer);
	return 0;
}
