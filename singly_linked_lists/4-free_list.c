#include "lists.h"

/**
 * free_list - function
 * @head: variable struct
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *test = head;
	
	while (test)
	{
		free(test);
		test = test->next;
	}
}
