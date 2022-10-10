#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	char *name = "(Nil)";
	char *owner = "(Nil)";
	float age = 0.0;

	if (d != NULL)
	{
		if (d->name != NULL)
			name = d->name;
		if (d->owner != NULL)
			owner = d->owner;
		if (d->age != 0.0)
			age = d->age;

		printf("Name: %s\n", name);
		if (age != 0.0)
			printf("Age: %.6f\n", age);
		else
			printf("Age: (Nil)\n");
		printf("Owner: %s\n", owner);
	}
}
