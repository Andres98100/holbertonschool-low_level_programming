#include<stdio.h>
#include"main.h"
/**
**_strncat - function print a concatenate
*@dest: variable
*@src: variable
*@n: variable
*Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[i + j] = src[j];
		}
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
