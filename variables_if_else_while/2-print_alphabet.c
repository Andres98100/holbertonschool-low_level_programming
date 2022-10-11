#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
*main - function main
*Description: print alphabet
*Return: zero
*/
int main(void)
{
char l = 'a';
while (l < 122)
{
putchar(l);
putchar("\n");
l++;
return (0);
}
