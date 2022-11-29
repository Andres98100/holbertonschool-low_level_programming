#include "lists.h"

/**
 * list_len - function print the len
 * @h: variable struct
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
