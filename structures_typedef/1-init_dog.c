#include <stdio.h>
#include <stdlib.h>
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
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
