#include<stdio.h>
/**
*main - this is the main
*Description: show base 16
*Return: zero
*/
int main(void)
{
char n = '0';
char l = 'a';
while (n <= '9')
{
putchar(n);
n++;
}
while (l <= 'f')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
