#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - initializes 'struct dog' as a variable
 *
 * @d: struct dog
 * @name: character type
 * @age: float type
 * @owner: character type
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
