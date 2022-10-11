#include"main.h"
/**
*print_alphabet_x10 - print 10 time the alphabet
*/
void print_alphabet_x10(void)
{
int i;
do
{
char l = 'a';
while (l < 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
i++;
}
while (i < 10);
