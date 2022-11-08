#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function searches an integer
 * @array: variable int
 * @size: variable
 * @cmp: variable int
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	else
	{
		return (-1);
	}
	return (-1);
}
