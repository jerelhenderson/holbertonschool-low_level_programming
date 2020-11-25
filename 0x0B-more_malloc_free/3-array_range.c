#include "holberton.h"


/**
 * array_range - create an integer array
 *
 * @min: starting integer
 * @max: finishing integer
 * Return: pointer to newly malloc'd array, or NULL
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min < max + 1; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
