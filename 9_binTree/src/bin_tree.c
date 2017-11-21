/*
 * =====================================================================================
 *
 *       Filename:  bin_tree.c
 *
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

class_binTree * get_binTree()
{
	class_binTree * new_binTree = 0;

	return new_binTree;
}

void insertion(class_binTree ** binTree_this, int data)
{
	if ((*binTree_this) == 0)
	{
		*binTree_this = (class_binTree *)malloc(sizeof(class_binTree));
		(*binTree_this)->info = data;
		(*binTree_this)->left = 0;
		(*binTree_this)->right = 0;
	}
	else
	{
		if (data < (*binTree_this)->info)
			insertion(&(*binTree_this)->left, data);
		else if (data >= (*binTree_this)->info)
			insertion(&(*binTree_this)->right, data);
	}
}

bool search (class_binTree ** binTree_this, int data)
{
	if ((*binTree_this) == 0)
	{
		return false;
	}
	else
	{
		if (((*binTree_this)->info) == data)
			return true;
		else if (data < (*binTree_this)->info)
			search (&(*binTree_this)->left, data);
		else if (data > (*binTree_this)->info)
			search (&(*binTree_this)->right, data);
	}
}

void traversal(class_binTree ** binTree_this)
{
	if ((*binTree_this) == 0)
		return;
	else
	{
		printf(" %d", (*binTree_this)->info);
		traversal(&(*binTree_this)->left);
		traversal(&(*binTree_this)->right);
	}
}

void deletion(class_binTree ** binTree_this)
{
	if ((*binTree_this) == 0)
		return;
	if ((*binTree_this)->left == 0 && (*binTree_this)->right == 0)
		return;
	else
	{
		deletion(&(*binTree_this)->left);
		if ((*binTree_this)->left != 0)
		{
			free((*binTree_this)->left);
			(*binTree_this)->left = 0;
		}
		deletion(&(*binTree_this)->right);
		if ((*binTree_this)->right != 0)
		{
			free((*binTree_this)->right);
			(*binTree_this)->right = 0;
		}
	}
}
