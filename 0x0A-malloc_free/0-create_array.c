#include "holberton.h"
#include <stdlib.h>


/**
 *create_array - create an array of chars
 *
 * @size: of array
 * @c: initialized array
 * Return: array pointer, or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int idx;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	idx = 0;
	while (idx < size)
	{
		arr[idx] = c;
		idx++;
	}
	return (arr);
}
