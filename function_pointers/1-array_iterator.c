#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function execute a parameter
 * @array: variable int
 * @size: variable
 * @action: variable
 * Return: zero
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
