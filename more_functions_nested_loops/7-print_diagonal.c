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

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else if (n <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
