#include "main.h"

/**
 * flip_bits - function returns the number of bits necesary
 * @n: variable long int
 * @m: variable long int
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0, num = n ^ m;

	if (n == m)
		return (0);

	while (num > 0)
	{
		flip += num & 1;
		num >>= 1;
	}
	return (flip);
}
