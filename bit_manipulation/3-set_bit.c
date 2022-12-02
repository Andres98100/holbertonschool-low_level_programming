#include "main.h"

/**
 * set_bit - function sets the value of a bit
 * @n: variable long int
 * @index: variable int
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);
	*n = *n | (1lu << index);
	return (1);
}
