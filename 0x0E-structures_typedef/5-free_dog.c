#include <stdlib.h>
#include "main.h"
/**
 * free_dog -  frees dogs
 * @d: Dog structure
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
