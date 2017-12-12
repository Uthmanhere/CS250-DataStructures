#include "Stack.h"

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

//declaring the variables
char base[MAX] = { 0 };	//the array
int top = -1;			//top ptr

void push(char info)
{
	if (top < MAX)		//limit check
	{
		++top;			//new term
		base[top] = info;
	}
}

char pop()
{
	char popped = base[top];
	base[top] = 0;	//clearing
	--top;			//one less a term
	return popped;
}

bool is_empty()
{
	if (top == -1)
		return true;
	else
		return false;
}

bool is_full()
{
	if (top = MAX - 1)
		return true;
	else
		return false;
}

void clear()
{
	//top to bottom clearance
	for (; top >= 0; --top)
		base[top] = 0;	
}

void peek()
{
	//top to bottom peeking...
	puts("");
	for (int counter = top; counter >= 0; --counter)
		printf(" %d", base[counter]);
}
