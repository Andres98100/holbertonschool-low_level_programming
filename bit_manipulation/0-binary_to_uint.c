#include "main.h"

/**
 * binary_to_uint - function print a binary
 * @b: variable char
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int binary_max = 0, actual_result = 1;
	unsigned int convert_int = 0;

	if (!b)
		return (0);
	binary_max = strlen(b) - 1;
	while (binary_max >= 0)
	{
		if (b[binary_max] != '0' && b[binary_max] != '1')
			return (0);
		convert_int += actual_result * (b[binary_max] - '0');
		actual_result *= 2;
		binary_max--;
	}
	return (convert_int);
}
