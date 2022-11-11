#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function print anything
 * @format: variable
 * Return: zero
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	va_list(ptr);
	int count;

	count = 0;
	va_start(ptr, format);
	while (format && format[count])
	{
		switch (format[count])
		{
			case 'c':
				c = (char) va_arg(ptr, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ptr, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(ptr, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ptr, char*);
				if (s == NULL)
					s = ("(nil)");
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[count])
			printf(", ");
		count++;
	}
	va_end(ptr);
	printf("\n");
}
