#include<stdio.h>
#include"main.h"
/**
*_isalpha - return uppercase or lowecase
*@c: variable
*Description: show tha variable c
*Return: 1 or 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
