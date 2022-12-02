#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0
 * @n: variable long int
 * @index: variable int
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);
	*n &= ~(1lu << index);
	return (1);
}
