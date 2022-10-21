#include<stdio.h>
#include"main.h"
/**
*_strspn - function get the length of a substring
*@s: variable pointer
*@accept: variable pointer
*Return: unsigned
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == accept[i])
			{
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (i);
}
