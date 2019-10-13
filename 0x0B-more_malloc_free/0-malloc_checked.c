#include "holberton.h"
#include <stdlib.h>


/**
 * malloc_checked - allocate memory to
 *
 * @b: allocated var
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
