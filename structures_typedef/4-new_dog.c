#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t save;
	char *newDog;

	if (save == NULL)
		return (NULL);
	save = malloc(save * sizeof(char));
	if (save != NULL)
	{
		save>name = name;
		save>age = age;
		save->owner = owner;
	}
	if (save->name == name)
	{
		save = name;
	}
	return (save);
}
