#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iteartor - function execute a parameter
 * @array: variable int
 * @size: variable
 * @action: variable
 * Return: zero
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array)
	{
		for (size = 0; array[size]; size++)
		{
			action(array[size]);
		}
	}
}
