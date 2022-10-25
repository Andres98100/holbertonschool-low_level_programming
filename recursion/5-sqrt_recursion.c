#include<stdio.h>
/**
*aux_sqrt - function does the procedure
*_sqrt_recursion - function print of the sqrt the a number
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
		return (n);
	}
	else
	{
		return (aux_sqrt(n, 1));
	}
}

int _sqrt_recursion(int n)
{
	return (aux_sqrt(n, 1));
}
