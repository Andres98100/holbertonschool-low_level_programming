#include "lists.h"

/**
 * listint_len - function print the len
 * @h: variable
 * Return: struct
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (!h)
		return (count);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
