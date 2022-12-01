#include "lists.h"

/**
 * pop_listint - function delete a node
 * @head: variable struct
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	listint_t *prev_node;

	if (!head)
		head = &aux;
	if (!*head)
		*head = aux;
	else
	{
		while (aux)
		{
			if (aux->n == *head)
				head* = aux->next;
			else
				prev_node->next = aux->next;
			prev_node = aux;
			aux = aux->next;
		}
	}
	return (*head);
}