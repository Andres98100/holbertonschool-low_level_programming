#include<stdio.h>
/**
*_strlen_recursion - function print the length of a string
*@s: variable pointer
*Return: int
*/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[len])
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
