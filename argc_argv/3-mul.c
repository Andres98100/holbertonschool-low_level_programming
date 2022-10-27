#include<stdio.h>
#include<stdlib.h>
/**
*main - function main
*@argc: variable int
*@argv: variable matriz
*Return: zero
*/
int main(int argc, char **argv)
{
	int n1 = 0;
	int n2 = 0;
	int result = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		result = n1 * n2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
