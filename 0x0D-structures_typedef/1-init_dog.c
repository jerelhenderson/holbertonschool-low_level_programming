#include "dog.h"


/**
 * init_dog - initializes 'struct dog' as variable
 *
 * @d: structure type "dog"
 * @name: name member
 * @age: age member
 * @owner: owner member
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
