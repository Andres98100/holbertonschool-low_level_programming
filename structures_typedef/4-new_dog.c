#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t save;
	char *newDog;

	if (newDog == NULL)
		return (NULL);
	newDog = malloc(newDog + 1);
	if (newDog != NULL)
	{
		newDog->name = name;
		newDOG->age = age;
		newDog->owner = owner;
	}
	if (newDog->name == name)
	{
		save = name;
	}
	return (save);
}
