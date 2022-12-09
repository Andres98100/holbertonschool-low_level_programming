#include "hash_tables.h"

/**
 * hash_table_get - function retrieves a value associated with a key.
 * @ht: variable struct
 * @key: variable char
 * Return: char
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht)
		return (NULL);
	if (!*key || !key)
		return (NULL);
	index = hash_djb2((const unsigned char *)key) % (ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}
return (NULL);
}
