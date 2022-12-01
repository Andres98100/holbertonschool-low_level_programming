#include "lists.h"

/**
 * free_listint2 - function free
 * @head: variable struct
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *aux = *head;
	if (!*head || !head)
		return;
	while (aux)
	{
		free(aux->next);
		aux->next = aux;
		*head = aux;
	}
	free(*head);
	*head = NULL;
}
