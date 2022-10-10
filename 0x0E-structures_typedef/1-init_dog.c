#include "dog.h"

/**
 * init_dog - to initialize dog fields
 * @d: pointer to the dog struct
 * @name: name
 * @age: age
 * @owner: owner string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
