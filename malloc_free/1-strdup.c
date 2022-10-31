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
int main(void)
{
	  char *s;

		s = _strdup("Duplicated");
		if (s == NULL)
		{
			printf("failed to allocate memory\n");
			return (1);
		}
		printf("%s\n", s);
		free(s);
		return (0);
}
