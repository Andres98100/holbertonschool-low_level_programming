#include <stdio.h>
#include "main.h"
/**
*times_table - function
*/
void times_table(void)
{
	int i = 0;
	int l;
	int c;

	for (l = 0; l <= 9; l++)
	{
		for (c = 0; c <= 9; c++)
		{
			int result = l * c;

			if (result > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (c == 0)
			{
				_putchar((result) + '0');
			}
			else if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((result) + '0');
			}
		}
		i++;
		_putchar('\n');
	}
}
