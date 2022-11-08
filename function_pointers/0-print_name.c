#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function print the name
 * @name: variable char
 * @f: variable void
 * Return: zero
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
