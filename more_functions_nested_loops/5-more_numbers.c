#include<stdio.h>
#include"main.h"
/**
*more_numbres - function
*/
void more_numbers(void)
{
	int w = 0;
	int f;

	while (w < 11)
	{
		for (f = 0; f < 15; f++)
		{
			if (f >= 10)
			{
				_putchar((f / 10) + '0');
			}
			_putchar((f % 10) + '0');
		}
		w++;
		_putchar('\n');
	}
}
