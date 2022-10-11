#include<stdio.h>
#include<ctype.h>
#include"main.h"
/**
*_islower - print if c is lower
*@c: variable
*Description: print if c is lower
*Return: 1 or 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
