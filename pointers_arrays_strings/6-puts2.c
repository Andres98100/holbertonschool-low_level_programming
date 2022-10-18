#include<stdio.h>
#include"main.h"
/**
*puts2 - prints to stdout
*@str: variable
*/
void puts2(char *str)
{
	int i;
	int j;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < str; j += 2)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
