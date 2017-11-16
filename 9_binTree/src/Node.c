/*
 * =====================================================================================
 *
 *       Filename:  Node.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/14/2017 03:25:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

typedef struct Node class_binTree;

struct Node 
{
	int info;
	class_binTree * left;
	class_binTree * right;
};
