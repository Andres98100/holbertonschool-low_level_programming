#include"main.h"
/**
*
*/
void print_alphabet_x10(void)
{
int i;
do
{
char l = 'a';
while (l < 'z')
{
printf("%c", l);
l++;
}
putchar(l);
putchar('\n');
i++;
}
while (i < 10); 
