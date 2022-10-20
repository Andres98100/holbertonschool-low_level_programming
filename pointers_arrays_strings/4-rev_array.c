#include<stdio.h>
#include"main.h"
/**
*reverse_array - function print a array in reverse
*@a: variable
*@n: variable
*/
void reverse_array(int *a, int n)
{
	int len;
	int aux = 0;
	int fp = 0;

	for (len = 0; len < n / 2; len++)
	{
		fp = (n - len) - 1;
		aux = a[len];
		a[len] = a[fp];
		a[fp] = aux;
	}
	while (len < n)
	{
		len++;
	}
}
