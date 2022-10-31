#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
**create_array - function create a array
*@size: variable int
*@c: variable char
*Return: char pointer
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc((size) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (a == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);
}
