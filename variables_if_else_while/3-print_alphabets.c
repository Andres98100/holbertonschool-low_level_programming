#include<stdio.h>
#include<stdlib.h>
/**
*main - function main
*Description: print albhabet A-Z
*Return: zero
*/
int main(void)
{
int l = 65;
while (l <= 122)
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
