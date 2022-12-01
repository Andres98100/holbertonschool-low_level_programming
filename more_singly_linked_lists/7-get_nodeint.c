#include "lists.h"

/**
 * get_nodeint - function return the nth node
 * @head: variable struct
 * @index: variable unsigned int
 * Return: structure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	unsigned int len = 0;
	listint_t *aux = head;

	while (aux)
	{
		len++;
		aux = aux->next;
	}
	if (!head || !index)
		return (NULL);
	if (index > len)
		return (NULL);
	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
