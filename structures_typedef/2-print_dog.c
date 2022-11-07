#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function print the struct dog
 * @d: variable struct
 * Retrun: zero
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: nil\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age == NULL)
			printf("Age: nil\n");
		else
			printf("Age: %f", d->age);
		if (d-> == NULL)
			printf("Owner: nill\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
