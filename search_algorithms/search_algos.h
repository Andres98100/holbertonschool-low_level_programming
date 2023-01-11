#ifndef SEARCH_H
#define SEARCH_H

/* LIBRARIES */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* PROTOTYPES :D*/

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
