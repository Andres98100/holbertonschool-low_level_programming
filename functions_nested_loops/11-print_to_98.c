#include<stdio.h>
#include"main.h"
/**
*print_to_98 - function
*@n: variable
*/
void print_to_98(int n)
{
int i;
if (n < 100)
{
for (i = n; i < 99; i++)
{
if (i == 98)
{
printf("%i", i);
}
else if (i != 99)
{
printf("%i, ", i);
}
}
printf("\n");
}
else
{
for (i = n; i >= 97; i--)
{
if (i == 98)
{
printf("%i", i);
}
else if (i != 97)
{
printf("%i, ", i);
}
}
printf("\n");
}
}
