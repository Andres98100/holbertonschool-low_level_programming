#include "lists.h"

/**
 * print_dlistint - function print all the elements
 * @h: variable struct
 * Return: struct
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
