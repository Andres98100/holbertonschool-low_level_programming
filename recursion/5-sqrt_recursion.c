#include<stdio.h>
/**
*aux_sqrt - function does the procedure
*_sqrt_recursion - function print of the sqrt the a number
*@n: variable int
*@num: variable
*@i: variable int
*Return: int
*/
int aux_sqrt(int num, int i)
{
	if (num == 0)
	{
		return (1);
	}
	else if (num < 0)
	{
		return (-1);
	}
	else if (i * i == num)
	{
		return (i);
	}
	else
	{
		return (aux_sqrt(num, i + 1));
	}
}

int _sqrt_recursion(int n)
{
	return (aux_sqrt(n, 1));
}
