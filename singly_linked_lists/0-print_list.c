#include "lists.h"

/**
 * print_list - function print linkedlist
 * @h: variable struct
 * return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while(h)
	{
		 if (h->str == NULL)
			 printf("[0] (nil)", h->len, h->str);
		 else
			 printf("%d %s\n", h->len, h->str);
		 h = h->next;
		 count++;
	}
	return (count);
}
