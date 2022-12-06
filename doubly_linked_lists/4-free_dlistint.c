#include "lists.h"

/**
 * free_dlistint - function free
 * @head: variable struct
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	while (!head)
		return;
	free_dlistint(head->next);
	free(head);
}
