#include<stdio.h>
#include"main.h"
/**
*void print_to_98
*@n: variable
*/
void print_to_98(int n)
{
for (n ;n <= 98; n++)
{
if (n != 98)
{
printf("%i", n);
_putchar(',');
_putchar(' ');
}
else if (n == n)
{
printf("%i", n);
}
}
for (n; n >= 98; n--)
{
if (n != 98)
{
printf("%i", n);
_putchar(',');
_putchar(' ');
}
else if (n == n)
{
printf("%i", n);
}
}
}
