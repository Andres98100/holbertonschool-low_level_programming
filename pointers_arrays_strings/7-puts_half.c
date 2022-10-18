#include<stdio.h>
/**
*puts_half - prints half of the string
*@str:  variable
*/
void puts_half(char *str)
{
	int len = 0;
	int j;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}
	for (j = n; j <= len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
