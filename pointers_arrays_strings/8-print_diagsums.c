#include<stdio.h>
#include"main.h"
/**
*print_diagsums - function add diag
*@a: variable pointer
*@size: variable
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int result = 0;
	int result2 = 0;
	int lp;

	for (i = 0; i < size; i++)
	{
		if (i == i)
		{
			result += a[i * (size + 1)];
		}
	}
	for (j = 0; j < size; j++)
	{
		lp = (size - j) - 1;
		if (j == j)
		{
			result2 = a[(j * size) + (n)];
		}
	}
	printf("%d, %d\n", result, result2);
}
