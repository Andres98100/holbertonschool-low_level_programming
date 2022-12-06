#include "lists.h"

/**
 * sum_dlistint - function sum all elements
 * @head: variable struct
 * Return: int
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
