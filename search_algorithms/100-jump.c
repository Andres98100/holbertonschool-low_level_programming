#include "search_algos.h"

/**
 * jump_search - function searches for a value in a sorted array of integers
 * @array: variable int
 * @size: variable size
 * @value: variable int
 * Return: int
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t idx_high = step;

	if (!array)
		return (-1);
	while (idx_high < size && array[idx_high] < value)
	{
		if (step >= size)
			break;
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
		prev = idx_high;
		idx_high += step;
	}
	printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, idx_high);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
		prev++;
	}
	if (prev < size && array[prev] == value)
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
