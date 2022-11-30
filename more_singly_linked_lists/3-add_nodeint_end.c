#include "lists.h"

/**
 * add_nodeint_end - function add to tail
 * @head: variable struct
 * @n: variable int
 * Return: struct
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tail = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		while (tail->next)
			tail = tail->next;
		tail->next = new;
	}
	return (new);
}
