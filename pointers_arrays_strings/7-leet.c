#include<stdio.h>
#include"main.h"
/**
**leet - function show string 1337
*@c: variable
*Return: char
*/
char *leet(char *c)
{
	int i = 0;
	int n;
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	while (c[i] != '\0')
	{
		n = 0;
		while (a[n] != '\0')
		{
			if (c[i] == a[n])
			{
				c[i] = b[n];
			}
			n++;
		}
		i++;
	}
	return (c);
}
