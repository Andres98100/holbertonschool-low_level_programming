#include<stdio.h>
#include"main.h"
/**
**_strstr - funciton locate a substring
*@haystack: variable pointer
*@needle: variable pointer
*Return: char
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
		}
		if (haystack[i] != needle[j])
		{
			return (haystack);
		}
	}
	return (0);
}
