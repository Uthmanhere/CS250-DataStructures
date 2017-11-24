/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/14/2017 04:15:39 PM
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
#include "bin_tree.h"

int main()
{
	class_binTree * myTree = get_binTree();
	
	puts("Inserting 1 to 18 : ");
	for (int counter = 10; counter < 13; ++counter)
		insertion (&myTree, counter);
	for (int counter = 12; counter < 18; ++counter)
		insertion (&myTree, counter);
	
	for (int counter = 12; counter > 0; --counter)
		insertion (&myTree, counter);

	puts("");
	puts("Traversal : ");
	traversal_in(&myTree);
	puts("\n\nSearching 4 to 30");
	for (int counter = 4; counter < 30; ++counter)
	{
		printf("Number %d\tis\t%s\n", counter, search(&myTree, counter) ? "Present" : "Not Present");
	}
	puts("");
	
	puts("Deletion!");


	deletion(&myTree);
	free(myTree);
	myTree = 0;


	puts("Traversal after deletion.");
	traversal_in(&myTree);
	puts("Nothing in the tree");
	

	return 0;
}

