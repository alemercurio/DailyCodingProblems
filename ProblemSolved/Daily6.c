#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct nod
{
	int elem;
	struct nod* prev;
	struct nod* next;
}node;

typedef struct
{
	node* prev;
	node* next;
}XOR;

typedef struct
{
	int elem;
	XOR both;
}XORnode;

typedef	XORnode* XORlist;

void add(int elem, XORlist* list);
XORlist get(int index, XORlist* list);

int main()
{
	int x;
	int i;
	XORlist* list;
	XORlist got;
	list=NULL;
	for(i=0; i<MAX; i++)
	{
		x=10;
		printf("\n%d",x);
		add(x,list);
		x--;
		printf("fine giro");
	}
	for(i=0;i<MAX;i++)
	{
		got=get(i, list);
		printf("\nAt index %d, extracted node with element %d",i,got->elem);
	}
	return 0;
}

void add(int elem, XORlist* list)
{
	XORlist current;
	if(list==NULL)
	{
		printf("entro nell'if");
		current=malloc(sizeof(XORnode));
		printf("malloc fatta");
		(current->elem)=elem;
		(current->both).next=NULL;
		*list=current;
	}
	else
	{
		add(elem, &(((*list)->both).next));
	}
}

XORlist get(int index, XORlist* list)
{
	XORlist current;
	int i;
	current=*list;
	for(i=0; i<index; i++)
	{
		current=(current->both.next);
	}
	return current;
}
