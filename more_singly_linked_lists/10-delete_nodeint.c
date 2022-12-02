#include "lists.h"

/**
 * delete_nodeint_at_index - dunction delete a node
 * @head: variable struct
 * @index: variable int
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *aux;
	unsigned int i = 0;
	unsigned int len = 0;

	if (!*head)
		return (-1);
	aux = *head;
	while (aux)
	{
		len++;
		aux = aux->next;
	}
	if (len < index)
		return (-1);
	aux = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	while (i < index - 1)
	{
		aux = aux->next;
		i++;
	}
	new = aux->next;
	aux->next = new->next;
	free(new);
	return (1);
}
