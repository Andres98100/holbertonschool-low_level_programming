#include <stdio.h>
#include "main.h"
/**
*_isdigit - function
*@c: variable
*Return: 1 or 0
*/
int _isdigit(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}
