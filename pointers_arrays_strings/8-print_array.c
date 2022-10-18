#include<stdio.h>
#include"main.h"
/**
*print_array - function print n elements
*@a: variable
*@n: variable
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%i, ", a[i]);
		}
		else
		{
		printf("%i\n", a[i]);
		}
	}
	if (n <= 4)
	{
		printf("\n");
	}
}
