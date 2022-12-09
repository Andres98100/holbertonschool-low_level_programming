#include "lists.h"

/**
 * delete_dnodeint_at_index - function delete at end
 * @head: variable struct
 * @index: variable int
 * Return: int
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete = *head;
	unsigned int count = 0;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next)
		{
			*head = delete->next;
			(*head)->prev = NULL;
			free(delete);
			return (1);
		}
		free(*head);
		*head = NULL;
		return (1);
	}
	while (delete->next)
	{
		if (count == index)
		{
			(delete->next)->prev = delete->prev;
			(delete->prev)->next = delete->next;
			free(delete);
			return (1);
		}
		count++;
		delete = delete->next;
	}
	if (index == count)
	{
		(delete->prev)->next = NULL;
		free(delete);
		return (1);
	}
	return (-1);
}
