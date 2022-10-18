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
	int i;
	int j;


	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = '\0';
	}
	_putchar('\n');
	return (dest);
}
