#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initiate dog structure
 * @d: Dog structure
 * @name: Dog name
 * @age: dog age
 * @owner: Dog owner
 * Return: Nothing
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
