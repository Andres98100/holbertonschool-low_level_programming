#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function free the dog
 * @d: variable struct
 * Return: zero
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	if (d != NULL)
		free(d);
}
