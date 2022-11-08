#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function free the dog
 * @d: variable struct
 * Return: zero
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
