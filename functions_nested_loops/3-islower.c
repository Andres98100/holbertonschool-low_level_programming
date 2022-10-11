#include<stdio.h>
#include<ctype.h>
/**
*_islower - print if c is lower
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
return (c);
}
