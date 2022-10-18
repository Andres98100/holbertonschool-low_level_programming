#include<stdio.h>
#include"main.h"
/**
**_strcpy - function that copy
*@dest: variable
*@src: variable
*Return: char
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
