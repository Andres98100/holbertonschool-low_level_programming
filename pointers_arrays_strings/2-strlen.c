#include<stdio.h>
#include"main.h"
/**
*_strlen - function
*@s: variable
*Return: int
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		*s++;
	}
	return (count);
}
