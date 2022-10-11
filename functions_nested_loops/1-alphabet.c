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
_putchar(l);
l++;
}
_putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
