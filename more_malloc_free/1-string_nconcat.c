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
	unsigned int len, i;
	unsigned int len2, j;
	char *cat = NULL;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	len = strlen(s1);
	len2 = strlen(s2);
	if (n > len2)
		cat = malloc((len + len2) + 1);
	else
		cat = malloc((len + n) + 1);
	if (cat == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cat[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n && j < len2)
	{
		cat[i] = s2[j];
		i++;
		j++;
	}
	cat[i] = '\0';
	return (cat);
}
