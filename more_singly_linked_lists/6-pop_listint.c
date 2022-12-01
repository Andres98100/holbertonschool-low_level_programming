#include "lists.h"

/**
 * pop_listint - function delete a node
 * @head: variable struct
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int count;

	if (!head || !*head)
		return (0);
	count = (*head)->n;
	*head = new->next;
	return (count);
}
