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

    index = hash_djb2(key);
    node = malloc(sizeof(hash_node_t));
    node->key = key;
    node->value = value;
    node->next = NULL;
    ht->array[index] = node;
}
