#include<stdio.h>
#include"main.h"
/**
*print_triangle - function
*@size: variable
*/
void print_triangle(int size)
{
	int i;
	int j;
	int in = 1;


	for (i = 0; i < size; i++)
	{
		for (j = size; j >= 1; j--)
		{
			if (in >= j)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
		in++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
