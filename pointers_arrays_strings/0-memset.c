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
	unsigned int i = 0;

	while (s[i] < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
