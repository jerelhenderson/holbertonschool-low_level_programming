#include "holberton.h"


/**
 *create_array - create an array of chars, and initializes with a specific char
 *
 * @size: array size
 * @c: character to fill array with
 * Return: pointer to array, or NULL if failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	arr[i] = '\0';

	return (arr);
}
