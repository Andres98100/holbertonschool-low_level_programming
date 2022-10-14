#include<stdio.h>
#include"main.h"
/**
*print_diagonal - function
*@n: variable
*/
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			if (i != 1)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
