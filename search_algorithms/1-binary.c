#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * @array: variable int
 * @size: variable size
 * @value: variable int
 * Return: int
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid = 0, high = size - 1, i;

	if (!array)
	{
		return (-1);
	}
	while (low <= high)
	{
		mid = (high + low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
