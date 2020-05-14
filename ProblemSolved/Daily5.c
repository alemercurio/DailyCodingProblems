/*
This problem was asked by Jane Street.

cons(a, b) constructs a pair, and car(pair) and cdr(pair) returns the first and last element of that pair. 
For example, car(cons(3, 4)) returns 3, and cdr(cons(3, 4)) returns 4.

Given this implementation of cons:

def cons(a, b):
    def pair(f):
        return f(a, b)
    return pair
	
Implement car and cdr.
*/

#include <stdio.h>

typedef struct
{
	int first;
	int second;
}pair;

pair cons(int a, int b);
int car(pair f);
int cdr(pair f);

int main()
{
	int a, b, c, d;
	printf("Insert a pair: ");
	scanf("%d,%d",&a,&b);
	c=car(cons(a,b));
	d=cdr(cons(a,b));
	printf("\ncar=%d, cdr=%d",c,d);
	return 0;
}

pair cons(int a, int b)
{
	pair f;
	f.first=a;
	f.second=b;
	return f;
}

int car(pair f)
{
	int c;
	c=f.first;
	return c;
}

int cdr(pair f)
{
	int d;
	d=f.second;
	return d;
}
