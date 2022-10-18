#include<stdio.h>

void puts_half(char *str)
{
	int len = 0;
	int j;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}
	for (j = n; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
