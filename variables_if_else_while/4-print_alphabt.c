#include<stdio.h>
#include<stdlib.h>
/**
*main - this is function main
*Description: delete q, e
*Return: zero
*/
int main(void)
{
char l = 'a';
while (l <= 'z')
{
if (l != 'e' && l != 'q')
{
putchar(l);
}
l++;
}
putchar('\n');
return (0);
}
