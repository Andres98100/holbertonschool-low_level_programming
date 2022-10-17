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

	for (;*s != '\0'; *s++)
	{
		count++;
	}
	return (count);
}
