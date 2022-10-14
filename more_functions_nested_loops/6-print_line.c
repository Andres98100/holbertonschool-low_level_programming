#include<stdio.h>
#include"main.h"
/**
*print_line - function
*@n: variable
*/
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
