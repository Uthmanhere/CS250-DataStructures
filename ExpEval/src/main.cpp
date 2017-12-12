#include <iostream>
#include <stdio.h>

using namespace std;

#include "Stack.h"

bool expression_check(char * exp)
{
	for (unsigned int counter = 0; exp[counter] != 0; ++counter)
	{
		if (
				exp[counter] == '[' ||
				exp[counter] == '{' ||
				exp[counter] == '('
				)
			push(exp[counter]);
		else if (
				exp[counter] == ']' ||
				exp[counter] == '}' ||
				exp[counter] == ')'
				)
			pop();

		if (is_empty())
			return true;
		else
			return false;
	}
}


int main()
{
	cout << "Expression: ";
	char * expr = (char *)malloc(50 * sizeof(char));

	cin >> expr;
		
	puts("");
	if (expression_check(expr))
		printf("the expression is correct\n");
	else
		printf("the expression is NOT correct\n");

	return 0;
}

