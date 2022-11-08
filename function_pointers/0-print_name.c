#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function print the name
 * @name: variable char
 * @f: variable void
 * Return: zero
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	name = malloc(name + 1);
	if (name == NULL)
	{
		free(name);
	}
	if (name)
	{
		for (i = 0; name[i]; i++)
		{
			f(&name[i]);
		}
	}
}
