#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - this function free memory
 * @d: is the pointer to the dog_t struct
 *
 * Return: it returns void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
