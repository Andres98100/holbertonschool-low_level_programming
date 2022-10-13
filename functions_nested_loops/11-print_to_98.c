#include<stdio.h>
#include"main.h"
/**
*void print_to_98
*@n: variable
*/
void print_to_98(int n)
{
int i;
int j;
for (i = n ;n <= 98; n++)
{
if (n != 98)
{
printf("%i", n);
_putchar(',');
_putchar(' ');
}
else if (n == 98)
{
printf("%i", n);
}
}
for (j = n; n >= 98; n--)
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
