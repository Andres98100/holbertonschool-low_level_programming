#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
*main - print numbers ramdoms
*Description: this function show if zero,negattive or posittive
*Return: zero
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%i is zero\n", n);
}
else
{
if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is positive\n", n);
}
}
return (0);
}
