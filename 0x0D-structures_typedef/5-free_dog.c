#include "dog.h"


/**
 * free_dog - free space malloc'd in 4-new_dog.c
 *
 * @d: pointer to 'struct dog'
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
