#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*string_nconcat - funtion concat two string
*@s1: variable
*@s2: variable
*@n: variable
*Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len = 0;
	unsigned int len2 = 0;
	int i;
	unsigned int j;
	char *cat = NULL;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n > len2)
	{
		cat = malloc((len + len2) + 1);
	}
	else
	{
		cat = malloc((len + n) + 1);
	}
	if (cat == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		cat[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		cat[i] = s2[j];
		i++;
		j++;
	}
	cat[i] = '\0';
	return (cat);
}
