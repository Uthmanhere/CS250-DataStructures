/*
 * =====================================================================================
 *
 *       Filename:  merge.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/31/2017 11:29:23 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */


#include <stdlib.h>
#include <string>
#include <queue>

#define SIZE 100

using namespace std;

void merge_sort(int *, size_t, size_t);
void merge(int *, size_t, size_t, size_t);

int main()
{

	int * data = new int[30];
	for (unsigned int counter = 0; counter < 30; ++counter)
		data[counter] = rand() % 100 + 1;
	
	printf("Unsorted: ");	
	for (unsigned int counter = 0; counter < 30; ++counter)
		printf(" %d", data[counter]);
	puts("");	
	
	merge_sort(data, 1, 30);

	printf("Sorted: ");
	for (unsigned int counter = 0; counter < 30; ++counter)
		printf(" %d", data[counter]);
	puts("");

	delete data;
	data = 0;

	return 0;
}


void merge_sort(int * data, size_t start, size_t end)
{
	unsigned int mid = 0;
	if (start < end)
	{
		mid = (start + end) / 2;
		merge_sort(data, start, mid);
		merge_sort(data, mid + 1, end);
		merge(data, start, mid, end);
	}
}
	
void merge(int * data, size_t start, size_t mid, size_t end)
{
	int * subA = new int[mid - start + 1];
	int * subB = new int[end - mid];

	for (unsigned int counter = 0; counter < mid - start + 1; ++counter)
		subA[counter] = data[counter + start - 1];
	for (unsigned int counter = 0; counter < end - mid; ++counter)
		subB[counter] = data[counter + mid];

	unsigned int subA_i = 0;
	unsigned int subB_i = 0;
	
	for (unsigned int counter = start - 1 ; counter < end; ++counter)
	{

		if (subA[subA_i] < subB[subB_i])
		{
			if (subA_i < mid - start + 1)
			{
				data[counter] = subA[subA_i];
				++subA_i;
			}
			else
			{
				data[counter] = subB[subB_i];
			   	++subB_i; 
			}
		}
		else
		{
			if (subB_i < end - mid)
			{
				data[counter] = subB[subB_i];
				++subB_i;
			}
			else
			{
				data[counter] = subA[subA_i];
				++subA_i;
			}					
		}

	}

	delete[] subA;
	delete[] subB;
	
	subA = 0;
	subB = 0;
}


