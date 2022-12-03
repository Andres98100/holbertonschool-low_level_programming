#include "main.h"

/**
 * flip_bits - function returns the number of bits necesary
 * @n: variable long int
 * @m: variable long int
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;

	for (i = n ^ m; i != 0; i = i >> 1)
		count += i & 1;
	return (count);
}
