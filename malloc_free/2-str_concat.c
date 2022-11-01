#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include"main.h"
/**
*str_concat - function concat two pointers
*@s1: variable pointer char
*@s2: variable pointer char
*Return: pointer char
*/
char *str_concat(char *s1, char *s2)
{
	char *cat = NULL;

	if (s1 == "")

		return (NULL);

	if (s2 == "")

		return (NULL);

	cat = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	strcat(cat, s1);
	strcat(cat, s2);
	return (cat);
}
