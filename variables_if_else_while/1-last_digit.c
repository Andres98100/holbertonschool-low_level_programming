#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
*main - this is the function main
*Description: show the last digit
*Return: zero
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("Last digit of %i is % i and is 0\n", n, n % 10);
}
else
{
if (n > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
}
else
{
if (n < 6 && n > 0)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
}
}
}
return (0);
}
