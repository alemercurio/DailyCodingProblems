/*
This problem was asked by Google.

An XOR linked list is a more memory efficient doubly linked list. 
Instead of each node holding next and prev fields, it holds a field named both, which is an XOR of the next node and the previous node. 
Implement an XOR linked list; it has an add(element) which adds the element to the end, and a get(index) which returns the node at index.
*/

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
