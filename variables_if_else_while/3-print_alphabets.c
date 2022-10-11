#include<stdio.h>
#include<stdlib.h>
/**
*main - function main
*Description: print albhabet A-Z
*Return: zero
*/
int main(void)
{
char l = 'A';
while(l <= 'Z')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
