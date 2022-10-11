#include<stdio.h>
#include<stdlib.h>
/**
*main - function main
*Description: print albhabet A-Z
*Return: zero
*/
int main(void)
{
char l = 'a';
char L = 'A';
while (l <= 'z')
{
putchar(l);
l++;
}
while (L <= 'Z')
{
putchar(L);
L++;
}
putchar('\n');
return (0);
}
