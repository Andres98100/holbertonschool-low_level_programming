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

	va_start(ptr, n);
	if (separator)
	{
		for (i = 0; i < in; i++) {
			if (ptr != NULL & i < n - 1)
			{
				printf("%d%c", va_arg(ptr, int), separator);
			}
			else
				printf("(nil)");
		}
	}
	printf("\n");
}
