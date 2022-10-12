#include<stdio.h>
#include"main.h"
void jack_bauer(void)
{
for (int i = 0; i <= 23; i++)
{
for (int j = 0; j <= 59; j++)
{
putchar((i / 10) + '0');
putchar((i % 10)+ '0');
putchar(':');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
putchar('\n');
}
}
}
