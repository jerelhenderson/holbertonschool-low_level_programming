#include "holberton.h"


/**
 * malloc_checked - allocate memory using `malloc`
 *
 * @b: memory size to malloc
 * Return: pointer to malloc'd memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
