#include "lists.h"

/**
 * add_dnodeint - function add a node
 * @head: variable struct
 * @n: variable int
 * Return: struct
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
		new->next = *head;
	}
	*head = new;
	return (new);
}
