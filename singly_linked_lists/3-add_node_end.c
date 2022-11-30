#include "lists.h"
/**
 * add_node_end - function
 * @head: variable struct
 * @str: variable pointer char
 * Return: struct
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int lenstr;
	list_t *last = *head;

	lenstr = strlen(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = lenstr;
	new->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
