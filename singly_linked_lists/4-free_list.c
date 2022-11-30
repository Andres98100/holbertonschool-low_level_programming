#include "lists.h"

/**
 * free_list - function
 * @head: variable struct
 * Return: void
 */

void free_list(list_t *head)
{
	while (head == NULL)
	{
		free(head->next);
		free(head->str);
		free(head);
	}
}
