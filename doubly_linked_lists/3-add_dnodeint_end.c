#include "lists.h"

/**
 * add_dnodeint_end - function add a node at end
 * @head: variable struct
 * @n: variable int
 * Return: struct
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (head)
		new->next = *head;
	if (*head)
		(*head)->prev = new;
	else
	{
		while (aux->next)
			aux = aux->next;
	}
	aux->next = new;
	return (new);
}
