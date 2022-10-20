#include<stdio.h>
#include"main.h"
/**
*string_toupper - function change lowercase to uppercase
*@c: variable
*Return: char
*/
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
		i++;
	}
	return (c);
}
