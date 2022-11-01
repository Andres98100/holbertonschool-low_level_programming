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

	if (b == NULL)
	{
		exit (98);
	}
	arr = (int *)malloc(b * sizeof(int));
}
