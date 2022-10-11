#include<stdio.h>
#include"main.h"
/**
*main - main function
*Description: show alphabet with functions
*Return: zero
*/
void print_alphabet(void)
{
char l = 'a';
while(l <= 'z')
{
printf("%c", l);
l++;
}
}
int main(void)
{
print_alphabet();
return (0);
}
