#include<stdio.h>
/**
*_print_rev_recursion - function print a string in reverse
*@s: variable pointer
*/
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_print_rev_recursion(s + 1);
		putchar(s[i]);
	}
}
