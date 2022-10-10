#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(*dog));

	if (name != NULL)
		dog->name = name;
	else
		return (NULL);
	if (owner != NULL)
		dog->owner = owner;
	else
		return (NULL);
	dog->age = age;

	return (dog);
}
