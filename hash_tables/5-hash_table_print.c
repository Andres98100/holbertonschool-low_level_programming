#include "hash_tables.h"

/**
 * hash_table_print - function prints a hash table
 * @ht: variable struct
 * Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, aux = 0;
	hash_node_t *head;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			if (aux != 0)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			head = head->next;
			aux++;
		}
	}
	printf("}\n");
}
