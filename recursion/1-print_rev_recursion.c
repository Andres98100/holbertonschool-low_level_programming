#include<stdio.h>
/**
*_print_rev_recursion - function print a string in reverse
*@s: variable pointer
*/
void _print_rev_recursion(char *s)
{
	if(*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c\n", s);
	}
}
