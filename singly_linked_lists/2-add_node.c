#include "lists.h"

/**
 * add_node - function add elements
 * @head: variable struct
 * @str: variable pointer char
 */

lists_t *add_node(list_t **head, const char *str)
{
	lists_t *new;
	int count = 0;
	int lenstr;
	lenstr = strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = lenstr;
	new->next = *head;
	*head = new;
	return (new);
}
