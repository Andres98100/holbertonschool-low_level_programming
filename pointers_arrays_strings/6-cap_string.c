#include<stdio.h>
#include"main.h"
/**
**cap_string - function show the first letter in uppercase
*@c: variable
*Return: char
*/
char *cap_string(char *c)
{
	int i = 0;
	int j;
	char a[] = " \t\n,;.!?\"(){}";

	if (c[0] >= 97 && c[0] <= 122)
	{
		c[0] -= 32;
	}
	while (c[i] != '\0')
	{
		if (c[i + 1] >= 97 && c[i + 1] <= 122)
		{
			for (j = 0; a[j] != '\0'; j++)
			{
				if (a[j] == c[i])
				{
					c[i + 1] -= 32;
					break;
				}
			}
		}
		i++;
	}
	return (c);
}
