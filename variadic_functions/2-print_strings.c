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
	char *pointer;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		pointer = va_arg(ptr, char *);
		if (pointer == NULL)
			printf("(nil)");
		else
			printf("%s", pointer);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
