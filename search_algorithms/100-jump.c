#include "search_algos.h"

/**
 * min - function return the min between tow int
 * @a: variable int
 * @b: variable int
 * Return: size_t
*/

size_t min(int a, int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

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

	if (!array)
		return (-1);

	while (array[min(step, size)] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	printf("Value checked array[%lu] = [%lu]\n", prev, prev);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
		prev++;
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}
