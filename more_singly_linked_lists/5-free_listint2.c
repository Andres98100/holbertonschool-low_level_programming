#include "lists.h"

/**
 * free_listint2 - function free
 * @head: variable struct
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;
	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
