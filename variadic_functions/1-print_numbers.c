#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_number - function print numbers
 * @separator: variable char const
 * @n: variable int
 * Return: zero
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char value;
	
	va_start(ptr, *separator, n);
	if (separator)
	{
	 for (i =0; i < n; i++)
		{
			value = va_arg(ptr, char, int);
			printf("%c %d\n", separator[i], n);
		}
	}
}
