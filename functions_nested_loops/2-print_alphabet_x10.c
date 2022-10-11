#include"main.h"
/**
*print_alphabet_x10 - print 10 time the alphabet
*/
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
