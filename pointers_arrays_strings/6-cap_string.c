#include<stdio.h>
#include"main.h"
/**
**cap_string - function show the first letter in uppercase
*@c: variable
*Return: char
*/
char *cap_string(char *c)
{
	int i = 1;

	while (c[i] != '\0')
	{
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] -= 32;
			}
		}
		if (c[i] == ' ')
		{
			i++;
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] -= 32;
			}
		}
		else
		{
			if (c[i] >= 'A' && c[i] <= 'Z')
			{
				c[i] += 32;
			}
		}
		i++;
	}
	return (c);
}
