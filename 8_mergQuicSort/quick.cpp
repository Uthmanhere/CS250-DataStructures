/*
 * =====================================================================================
 *
 *       Filename:  quick.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/01/2017 04:02:25 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *, size_t, size_t);
size_t partition(int *, size_t, size_t);

int main()
{
	int * data = new int[30];

	for (unsigned int counter = 0; counter < 30; ++counter)
		data[counter] = rand() % 100 + 1;


	printf("Data: ");
	for (unsigned int counter = 0; counter < 30; ++counter)
		printf(" %d", data[counter]);
	puts("");

	quick_sort(data, 1, 30);

	printf("Sorted: ");
	for (unsigned int counter = 0; counter < 30; ++counter)
		printf(" %d", data[counter]);
	puts("");


	return 0;
}

void quick_sort(int * data, size_t start, size_t end)
{
	unsigned int div = 0;
	if (start < end)
	{
		div = partition(data, start, end);
		quick_sort(data, start, div-1);
		quick_sort(data, div + 1, end);
	}
}

size_t partition(int * data, size_t start, size_t end)
{
	int temp = 0;
	int piv = data[end];

	unsigned int startOver = start - 1;
	for (unsigned int endOver = start; endOver < end; ++endOver)
	{
		if (data[endOver] <= piv)
		{
			++startOver;

			temp = data[startOver];
			data[startOver] = data[endOver];
			data[endOver] = temp;

		}
	}

	temp = data[startOver + 1];
	data[startOver + 1] = data[end];
	data[end] = temp;

	return startOver + 1;
}

