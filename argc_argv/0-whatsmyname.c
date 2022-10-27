#include<stdio.h>
#include<stlib.h>
/**
*main - function main
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
}
