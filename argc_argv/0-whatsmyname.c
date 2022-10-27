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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
