/*
 * =====================================================================================
 *
 *       Filename:  bin_tree.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/14/2017 03:31:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include "bin_tree.h"

#include <stdlib.h>
#include <stdio.h>

class_binTree * get_binTree(int data)
{
	class_binTree * new_binTree = (class_binTree *)malloc(sizeof(class_binTree));
;
	return new_binTree;
}

void insertion(class_binTree * binTree_this, int data)
{
	if (binTree_this == 0)
	{
		binTree_this = (class_binTree *)malloc(sizeof(class_binTree));
		binTree_this->info = data;
		binTree_this->left = 0;
		binTree_this->right = 0;
		printf("Allocating bin tree : %d\t%d\n", binTree_this->info, binTree_this);
	}
	else
	{
		puts("Go deeper");
		if (data < binTree_this->info)
			insertion(binTree_this->left, data);
		else if (data >= binTree_this->info)
			insertion(binTree_this->right, data);
	}
}

bool search (class_binTree * binTree_this, int data)
{
	puts("Kuch chal b rha hey?");
	printf("even binTree : %d", binTree_this);
	printf("binTree : %d\tdata : %d\n", binTree_this->info, data);
//	puts("Yaar yeh kya mazak hey?");
	if (binTree_this == 0)
		return false;
	else
	{
		if (binTree_this->info == data)
			return true;
		else if (data < binTree_this->info)
			search (binTree_this->left, data);
		else if (data > binTree_this->info)
				search (binTree_this->right, data);
	}
}

void traversal(class_binTree * binTree_this)
{
	if (binTree_this == 0)
		return;
	else
	{
		printf(" %d", binTree_this->info);
		traversal(binTree_this->left);
		traversal(binTree_this->right);
	}
}
