#include "hash_tables.h"

/**
 * hash_table_set - function add elements
 * @ht: variable atruct
 * @key: variable char
 * @value: variable char
 * Return: int
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *node = NULL;
	char *dup_key = NULL, *dup_value = NULL;

	dup_key = strdup(key);
	dup_value = strdup(value);
	if (!ht || !value || !dup_value)
		return (0);
	index = hash_djb2((const unsigned char *)dup_key) % (ht->size);
	node = malloc(sizeof(hash_node_t));
	node->key = dup_key;
	node->value = dup_value;
	node->next = NULL;
	if (ht->array[index] && strcmp(ht->array[index]->key, dup_key) != 0)
		node->next = ht->array[index];
	else if (ht->array[index])
	{
		free(ht->array[index]->key);
		free(ht->array[index]->value);
		free(ht->array[index]);
	}
	ht->array[index] = node;
	return (1);
}
