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
		if(d->name != NULL)
			name = d->name;
		if(d->owner != NULL)
			owner = d->owner;
		age = d->age;

		printf("Name: %s\n", name);
		printf("Age: %.6f\n", age);
		printf("Owner: %s\n", owner);
			
	}
}
