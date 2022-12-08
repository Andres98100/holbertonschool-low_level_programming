#include "hash_tables.h"

/**
 * *hash_table_create -  function implementing the djb2 algorithm.
 * @size: const unsigned char variable
 * Return: unsigned long integer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_table_t *));
	if (!table->array)
		return (NULL);
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
