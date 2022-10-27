#include<stdio.h>
#include"main.h"
/**
*_strcmp - function compare two string
*@s1: variable
*@s2: variable
*Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int flag = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] < s2[i])
	{
		flag = -13;
	}
	else if (s1[i] > s2[i])
	{
		flag = 13;
	}
	else
	{
		flag = 0;
	}
	return (flag);
}
