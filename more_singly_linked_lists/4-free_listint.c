#include "lists.h"

/**
 * free_listint - function free
 * @head: variable struct
 * Return: void
*/

void free_listint(listint_t *head)
{
    while (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}