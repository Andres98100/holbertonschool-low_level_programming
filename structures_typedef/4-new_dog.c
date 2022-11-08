#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *newDog;

	if (newDog == NULL)
		return (NULL);
	newDog = malloc(sizeof(newDog));
	if (newDog != NULL)
	{
		newDog->name = name;
		newDog->age = age;
		newDog->owner = owner;
	}
	return (newDog);
}
