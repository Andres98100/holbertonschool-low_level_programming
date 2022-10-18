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
	char *aux = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
