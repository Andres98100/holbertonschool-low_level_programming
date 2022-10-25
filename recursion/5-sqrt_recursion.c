#include<stdio.h>
/**
*aux_sqrt - function does the procedure
*@n: variable int
*@i: variable int
*Return: int
*/
int aux_sqrt(int n, int i)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (aux_sqrt(n, i + 1));
	}
}

/**
*_sqrt_recursion - return the sqrt root of a number
*@n: variable
*Return: int
*/

int _sqrt_recursion(int n)
{
	return (aux_sqrt(n, 1));
}
