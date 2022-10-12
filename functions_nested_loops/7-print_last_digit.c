#include<stdio.h>
#include"main.h"
/**
*print_last_digit - print the last digit
*@n: variable
*Return: int
*/
int print_last_digit(int n)
{
int l = 0;
l = n % 10;
if (n < 0)
{
l = l * -1;
_putchar(l + '0');
return (l);
}
else
{
_putchar(l + '0');
return (l);
}
}
