#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes structures
 * @d: pointer to a structure.
 * @name: pointer
 * @age: age
 * @owner: owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

