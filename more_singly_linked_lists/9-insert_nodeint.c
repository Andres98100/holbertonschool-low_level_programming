#include "lists.h"

/**
 * insert_nodeint_at_index - funcction add new node
 * @head: variable struct
 * @idx: variable unsigned int
 * @n: variable int
 * Return: struct
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux = *head;
	unsigned int i = 0, len = 0;

	while (aux)
	{
		len++;
		aux = aux->next;
	}
	if (!*head && idx != 0)
		return (NULL);
	if (len < idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	aux = *head;
	while (i < idx - 1)
	{
		aux = aux->next;
		i++;
	}
	new->next = aux->next;
	aux->next = new;
	return (new);
}
