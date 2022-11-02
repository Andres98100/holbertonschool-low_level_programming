#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*_calloc - function allocates memory
*@nmemb: variable
*@size: variable
*Return: zero
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr = NULL;

	arr = malloc(nmemb + size);
	arr = calloc(nmemb + size);
	if (nmemb == 0 || size == 0)
	{
		exit (NULL);
	}
	return (NULL);
}
