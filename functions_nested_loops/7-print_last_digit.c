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
n = n * -1;
l = n % 10;
_putchar(l);
return (l);
}
