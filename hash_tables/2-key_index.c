#include "hash_tables.h"

/**
 * key_index -  function function that gives you the index of a key
 * @key: const unsigned char variable
 * @size: const unsigned variable
 * Return: unsigned long integer
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
