#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - function allocates memory
*@b: variable
*/
void *malloc_checked(unsigned int b)
{
	int *arr = NULL;

	arr = malloc(b * sizeof(int));
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
