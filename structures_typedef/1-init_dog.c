#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function initialize a variable
 * @d: variable struct
 * @name: variable char
 * @age: variable float
 * @owner: variable char
 * Return: zero
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct d));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
