#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*alloc_grid - function return pointer 2 dimmensional
*@width: variable
*@height: variable
*Return: int
*/
int **alloc_grid(int width, int height)
{
	int **matriz;
	int i, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	matriz = (int**)malloc(height * sizeof(int *));
	if (matriz == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matriz[i] = (int*)malloc(width * sizeof(int));
	}
}
