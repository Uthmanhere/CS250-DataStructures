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

void traversal_pre(class_binTree ** binTree_this)
{
	if ((*binTree_this) == 0)
		return;
	else
	{
		printf(" %d", (*binTree_this)->info);
		traversal_pre(&(*binTree_this)->left);
		traversal_pre(&(*binTree_this)->right);
	}
}

void traversal_in(class_binTree ** binTree_this)
{
	if ((*binTree_this) == 0)
		return;
	else
	{
		traversal_in(&(*binTree_this)->left);
		printf(" %d", (*binTree_this)->info);
		traversal_in(&(*binTree_this)->right);
	}
}
void traversal_pos(class_binTree ** binTree_this)
{
	if ((*binTree_this) == 0)
		return;
	else
	{
		traversal_pos(&(*binTree_this)->left);
		traversal_pos(&(*binTree_this)->right);
		printf(" %d", (*binTree_this)->info);

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
