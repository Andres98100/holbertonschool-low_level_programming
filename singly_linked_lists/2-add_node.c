#include "lists.h"

/**
 * add_node - function add elements
 * @head: variable struct
 * @str: variable pointer char
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
