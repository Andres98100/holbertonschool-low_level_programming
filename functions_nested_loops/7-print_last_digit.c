#include<stdio.h>
#include"main.h"
/**
*print_last_digit - print the last digit
*@n: variable
*Return: int
*/
int print_last_digit(int n)
{
char l = '0';
l = n % 10;
l = n * -1;
_putchar(l);
return (l);
}
