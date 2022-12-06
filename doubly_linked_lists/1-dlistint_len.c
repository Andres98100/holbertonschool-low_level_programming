#include "lists.h"

/**
 * dlistint_len - function
 * @h: variable struct
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
