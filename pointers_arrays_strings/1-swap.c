#include<stdio.h>
#include"main.h"
/**
*swap_int - function
*@a: variable
*@b: variable
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
