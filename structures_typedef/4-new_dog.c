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
	newDog->owner = malloc(strlen(owner) + 1);
	return (newDog);
}
