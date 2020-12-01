#include "dog.h"


/**
 * print_dog - print `struct dog` function
 *
 * @d: pointer to structure "dog"
 * Return: nothing if 'd' is NULL
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
