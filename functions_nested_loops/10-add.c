#include<stdio.h>
#include"main.h"
/**
*add - function
*@c: variable
*@n: variable  
*Return: int
*/
int add(int c, int n)
{
int n1;
int n2;
int ad = 0;
ad = n1 + n2;
if (ad <= 9 && ad >= 0)
{
_putchar((ad) + '0');
}
else if (ad > 9 && ad <= 99)
{
_putchar((ad / 10) + '0');
_putchar((ad % 10) + '0');
_putchar((ad) + '0');
}
return (ad);
}
