#include "holberton.h"
#include <stdlib.h>


/**
 * _strdup - returns function to new memory space
 *
 * @str: str copy
 * Return - duplicated string, or NULL
 */
char *_strdup(char *str)
{
	int idx, cpy;
	char *space;

	if (str == NULL)
		return (NULL);

	idx = 0;
	while (str[idx] != '\0')
		idx++;

	space = malloc(idx * sizeof(*space));
	if (space == NULL)
		return (NULL);

	cpy = 0;
	while (cpy < idx)
	{
		space[cpy] = str[cpy];
		cpy++;
		space[cpy] = '\0';
	}
	return (space);
}
