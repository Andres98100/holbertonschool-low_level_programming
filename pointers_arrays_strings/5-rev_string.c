#include<stdio.h>
#include"main.h"
/**
*rev_string - function stdout
*@s: variable
*/
void rev_string(char *s)
{
	int i = 0;
	int j;
	int pf;
	int aux;

	while (s[i] != '\0')
	{
		i++;
	}
	pf = i - 1;
	for (j = 0; j < i / 2; j++)
	{
		aux = s[j];
		s[j] = s[pf];
		s[pf] = aux;
		pf--;
	}
}
