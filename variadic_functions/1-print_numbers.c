#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function print numbers
 * @separator: variable char const
 * @n: variable int
 * Return: zero
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	unsigned int value;

	va_start(ptr, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			value = va_arg(ptr, int);
			if (i < value)
				printf("%d %c", value, separator[i]);
		}
	}
}
