#include<stdio.h>
#include"main.h"
/**
*print_last_digit - print the last digit
*@n: variable
*Return: int
*/
int print_last_digit(int n)
{
int num;
num = n % 10;
printf("%i", num);
return (num);
} 
