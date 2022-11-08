#include <stdio.h>
#include <stdlib.h>
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


	newDog = malloc(sizeof(newDog));
	if (newDog == NULL)
		return (NULL);
	if (newDog != NULL)
	{
		newDog->name = name;
		newDog->age = age;
		newDog->owner = owner;
	}
	return (newDog);
}
