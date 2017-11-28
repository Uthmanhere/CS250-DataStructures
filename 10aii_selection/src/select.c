/*
 * =====================================================================================
 *
 *       Filename:  select.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/28/2017 10:42:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include <stdio.h>

#define SIZE 5 

int main()
{
	int data[SIZE] = { 2, 3, 5, 4, 1 };
	int tmp = 0;
	int awein = 0;
	
	puts("Data :");
	for (int counter = 0; counter < SIZE; ++counter)
		printf(" %d", data[counter]);
	puts("");
	
	int subCounter = 0;
	for (int counter = 0; counter < SIZE - 1; ++counter)
	{
		tmp = counter;
		for (subCounter = counter; subCounter < SIZE - 1; ++subCounter)
		{
			if (data[subCounter] < data[subCounter + 1])
			{
				tmp = subCounter + 1;
			}

		}
		
		awein = data[counter];
		data[counter] = data[tmp];
		data[tmp] = awein;
	}

	puts("Sorted :");
	for (int counter = 0; counter < SIZE; ++counter)
		printf(" %d", data[counter]);
	puts("");


	return 0;
}
