#include<stdio.h>
#include"main.c"
/**
*print_sign - function
*@n: variable
*Return: 1 or 0
*/
int print_sign(int n)
{
if (n > 0)
printf("+");
return (1);
else
if (n == 0)
printf("0");
return (0);
else
if (n < 0)
printf("-");
return (-1);
}
