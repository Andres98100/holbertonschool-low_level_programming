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
int num;
srand(time(0));
n = rand() - RAND_MAX / 2;
num = n % 10;
if (num == 0)
{
printf("Last digit of %i is% i and is 0\n", n, num);
}
else
{
if (num > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, num);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, num);
}
}
return (0);
}
