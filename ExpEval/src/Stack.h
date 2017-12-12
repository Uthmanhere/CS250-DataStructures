#ifndef __STACK_H
#define __STACK_H

#include <stdbool.h>
#include <stdlib.h>

//insert and extract
void push(char);
char pop();

//checks
bool is_empty();
bool is_full();

//clearance and peeking
void clear();
void peek();


#endif
