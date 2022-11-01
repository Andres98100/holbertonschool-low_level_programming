#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*str_concat - function concat two pointers
*@s1: variable pointer char
*@s2: variable pointer char
*Return: pointer char
*/
char *str_concat(char *s1, char *s2)
{
	int len = 0;
	int len2 = 0;
	int i, j;
	char *cat = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = strlen(s1);
	len2 = strlen(s2);
	cat = malloc(sizeof(char) * (len + len2) + 1);
	if (cat == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		cat[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		cat[i] = s2[j];
		i++;
		j++;
	}
	cat[i] = '\0';
	return (cat);
}
