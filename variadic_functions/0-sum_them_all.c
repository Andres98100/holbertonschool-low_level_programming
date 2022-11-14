#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function sum two integers
 * @n: variable int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int value;
	va_list ptr;
	unsigned int i;
	
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(ptr, int);
		sum += value;
	}
	va_end(ptr);
	return (sum);
}
