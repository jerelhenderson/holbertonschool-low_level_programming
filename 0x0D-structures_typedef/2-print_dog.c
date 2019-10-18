#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print 'struct dog'
 *
 * @d: pointer to 'struct dog'
 * Return: Nothing if 'd' is NULL
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}