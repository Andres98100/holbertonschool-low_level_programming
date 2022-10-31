#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
**_strdup - function copy a string
*@str: variable pointer char
*Return: pointer char
*/
char *_strdup(char *str)
{
	int len;
	int i;
	char *arr = NULL;
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	arr = malloc(sizeof(len + 1));
	if (arr == 0)
	{
		return (NULL);
	}
	if (str == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}