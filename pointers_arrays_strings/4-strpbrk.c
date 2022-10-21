#include<stdio.h>
#include"main.h"
/**
**_strpbrk - function search a string
*@s: variable pointer
*@accept: variable pointer
*Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (i);
			}
		}
		if (accept[j] != '\0')
		{
			return (i);
		}
		}
	return (0);
}
