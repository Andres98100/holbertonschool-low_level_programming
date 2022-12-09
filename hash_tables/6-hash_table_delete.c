#include "hash_tables.h"

/**
 * hash_table_delete - function delete ht
 * @ht: variable struct
 * Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			free(aux->key);
			free(aux->value);
			free(aux);
			aux = aux->next;
		}
	}
	free(ht->array);
	free(ht);
	aux = NULL;
}
