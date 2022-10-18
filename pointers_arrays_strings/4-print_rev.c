#include<stdio.h>
#include"main.h"
/**
*print_rev - function to stdout
*@s: variable
*/
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i];
		i--;
	}
}
