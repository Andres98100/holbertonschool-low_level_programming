#include<stdio.h>
/**
*aux_prime_number - function does the procedure
*@n: variable
*@i: variable
*Return: int
*/
int aux_prime_number(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i != 0)
	{
		return (aux_prime_number(n, i + 1));
	}
	else
	{
		return (0);
	}
}
/**
*is_prime_number - function recursive
*@n: variable
*Return: int
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (aux_prime_number(n, 2));
	}
}
