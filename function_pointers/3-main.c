#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - funcition main
 * @argc: variable int
 * @argv: variable pointer
 * Return: zero
 */
int main(int argc, *argv[])
{
	int num1, num2;
	int (*getopfun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exir(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	getopfun = get_op_func(argv[2]);
	getopfun(num1, num2);
	if (getopfun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else
	{
		printf("%d\n", getopfun(num1, num2));
	}
	return (0);
}
