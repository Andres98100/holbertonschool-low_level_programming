#include<stdio.h>
#include"main.h"
/**
**_memcpy - function copy a memory
*@dest: variable
*@src: variable
*@n: variable
*Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
