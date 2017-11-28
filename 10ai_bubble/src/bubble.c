/*
 * =====================================================================================
 *
 *       Filename:  bubble.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/28/2017 10:33:09 AM
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
	int data[SIZE] = {4, 5, 2, 4, 2};
	int tmp = 0;

	puts("Data :");
	for (int counter = 0; counter < SIZE; ++counter)
		printf(" %d", data[counter]);
	puts("");
	

	for (int counter = 0; counter < SIZE - 1; ++counter)
	{
		if (data[counter] < data[counter + 1])
		{
			tmp = data[counter];
			data[counter] = data[counter + 1];
			data[counter + 1] = tmp;
			counter = 0;
		}
	}

	puts("Sorted :");
	for (int counter = 0; counter < SIZE; ++counter)
		printf(" %d", data[counter]);
	puts("");
	return 0;
}
