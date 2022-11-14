#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - function add two integers
 * @a: variable int
 * @b: variable int
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function subtraction two integers
 * @a: variable int
 * @b: variable int
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function mul two integers
 * @a: variable int
 * @b: variable int
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function div two integers
 * @a: variable int
 * @b: variable int
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}
/**
 * op_mod - function mod two integers
 * @a: variable int
 * @b: variable int
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
