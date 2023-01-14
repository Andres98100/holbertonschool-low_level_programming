#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * @array: variable int
 * @size: variable size
 * @value: variable int
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || !value)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
