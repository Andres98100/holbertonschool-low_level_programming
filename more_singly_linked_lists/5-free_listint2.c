#include "lists.h"

/**
 * free_listint2 - function free
 * @head: variable struct
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (*head)
		free(*head);
	*head = NULL;
}
