#include<stdio.h>
#include"main.h"
/**
*void print_to_98
*@n: variable
*/
void print_to_98(int n)
{
int i;
for (i = n ;n <= 98; n++)
{
if (i != 98)
{
printf("%i", i);
_putchar(',');
_putchar(' ');
}
else if (i == 98)
{
printf("%i", i);
}
}
for (i = n; n >= 98; n--)
{
if (i != 98)
{
printf("%i", i);
_putchar(',');
_putchar(' ');
}
else if (i == 98)
{
printf("%i", i);
}
}
}
