#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function print the struct dog
 * @d: variable struct
 * Retrun: zero
 */
void print_dog(struct dog *d)
{
	int i;

	for (i = 0; i < d; i++)
	{
		printf("Name: %s\n", d[i].name);
		printf("Age: %f\n", d[i].age);
		printf("Owner: %s", d[i].owner);
	}
}
