#include "lists.h"

/**
 * insert_dnodeint_at_index - function add node at index
 * @h: variable struct
 * @idx: variable int
 * @n: variable int
 * Return struct
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux = *h;
	unsigned int count = 0;

	if (!*h || (!h && idx != 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (aux->next || idx == count)
	{
		if (idx == count)
		{
			aux->prev->next = new;
			new->prev = aux->prev;
			new->next = aux;
			aux->prev = new;
			return (new);
		}
		aux = aux->next;
		count++;
	}
	if (idx + 1 == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	free(new);
	return (NULL);;
}