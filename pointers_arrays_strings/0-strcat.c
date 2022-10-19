#include<stdio.h>
#include"main.h"
/**
**_strcat - function print concat
*@dest: variable
*@src: variable
*Return: char
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char *aux;

	while (dest[i] != '\0')
	{
		aux[j] = dest[i];
		i++;
		j++;
	}
	i = 0;

	while (src[i] != '\0')
	{
		aux[j] = src[i];
		i++;
		j++;
	}
	aux[j] = '\0';
	return (aux);
}
