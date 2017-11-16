/*
 * =====================================================================================
 *
 *       Filename:  bin_tree.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/14/2017 03:29:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include <stdbool.h>

#include "Node.c"

class_binTree *  get_binTree(int);
void insertion(class_binTree *, int);
void deletion(class_binTree *);
bool search(class_binTree *, int);
void traversal(class_binTree *);
