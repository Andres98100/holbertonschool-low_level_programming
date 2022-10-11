#include<stdio.h>
/**
*main - this is function main
*Description: reverse alphabet
*Return: zero
*/
int main(void)
{
char l = 'z';
while (l >= 'a')
{
putchar(l);
l--;
}
putchar('\n');
return (0);
}
