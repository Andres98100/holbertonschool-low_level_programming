#include<stdio.h>
/**
*main - function main
*Description: show all numbers singles
*Return: zero
*/
int main(void)
{
int n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
