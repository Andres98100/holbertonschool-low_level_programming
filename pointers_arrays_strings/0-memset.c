#include<stdio.h>
#include"main.h"
/**
**_memset - function fills the memory
*@s: variable
*@b: variable
*@n: variable
*Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
