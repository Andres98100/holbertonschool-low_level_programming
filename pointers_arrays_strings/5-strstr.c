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

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
					i++;
				} while (haystack[i] == needle[i]);
			}
		haystack++;
		}
	return ('\0');
}

