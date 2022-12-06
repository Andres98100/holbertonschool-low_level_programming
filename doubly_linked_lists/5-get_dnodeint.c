#include "lists.h"

/**
 * get_dnodeint_at_index - function add at index
 * @head: variable struct
 * @index: variable int
 * Return: struct
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, len = 0;
	dlistint_t *aux = head;

	while (aux)
	{
		len++;
		aux = aux->next;
	}
	if (!head)
		return (NULL);
	if (index > len)
		return (NULL);
	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
