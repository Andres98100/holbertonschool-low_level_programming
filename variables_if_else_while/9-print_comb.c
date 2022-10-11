#include<stdio.h>
/**
*main - main function
*description: combination of numbers
*Return: zero
*/
int main(void)
{
int l = '0';
while (l <= '9')
{
putchar(l);
if (l != '9')
{
putchar(',');
putchar(' ');
}
l++;
}
putchar('\n');
return (0);
}
