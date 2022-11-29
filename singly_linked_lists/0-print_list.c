#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - function print linkedlist
 * @h: variable struct
 * return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while(h[i])
	{
		 if (str->list_t == NULL)
			 printf("[0] (nil)", h->len, h->str);
		 else
			 printf("%d %s", h-len, h-str);
		 h = h->next;
		 count++;
	}
	return (count);
}
