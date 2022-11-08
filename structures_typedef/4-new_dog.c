#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - funtion save a copy
 * @name: variable char
 * @age: variable float
 * @owner: variable char
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int lenName;
	int lenOwner;
	int i;
	int j;

	lenName = strlen(name);
	lenOwner = strlen(owner);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	if (newDog != NULL)
	{
		newDog->name = name;
		newDog->age = age;
		newDog->owner = owner;
	}
	newDog->name = malloc(strlen(name) + 1);
	if (newDog->name == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->owner = malloc(strlen(owner) + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < lenName; i++)
	{
		newDog->name[i] = name[i];
	}
	for (j = 0; j < lenOwner; j++)
	{
		newDog->owner = owner[j];
	}
	return (newDog);
}
