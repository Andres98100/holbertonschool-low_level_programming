#include<stdio.h>
#include"main.h"
/**
*print_sign - function
*@n: variable
*Return: 1 or 0
*/
int print_sign(int n)
{
if (n > 0)
printf("+\n");
return (1);
if (n == 0)
printf("0");
return (0); 
}
