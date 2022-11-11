#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function print two string
 * @separator: variable char
 * @n: variable int
 * Return : zero
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, separator);
	for (i = 0; i < n; i++)
	{
		if (separator && i < n - 1)
		{
			printf("%s%d", va_arg(ptr, char), n);
		}
		else
			printf("(nil)");
	}
	va_end(ptr);
	printf("\n");
}
