#include<stdio.h>
#include"main.h"
/**
**_strchr - function locates a char in a string
*@s: variable
*@c: variable
*Return: char
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
