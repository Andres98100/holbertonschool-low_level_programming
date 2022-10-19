#include<stdio.h>
#include"main.h"
/**
**_strncpy - function print copy
*@dest: variable
*@src: variable
*@n: variable
*Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
