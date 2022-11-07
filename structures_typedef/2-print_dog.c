#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function print the struct dog
 * @d: variable struct
 * Retrun: zero
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s", d->owner);
	
}
