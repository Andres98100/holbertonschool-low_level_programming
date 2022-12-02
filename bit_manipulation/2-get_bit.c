#include "main.h"

/**
 * get_bit - function return a bit
 * @n: variable long int
 * @index: variabble int
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	if (index >= 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
