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
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	aux[i + j] = '\0';
	return (aux);
}
