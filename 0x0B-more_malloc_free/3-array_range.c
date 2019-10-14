#include "holberton.h"
#include <stdlib.h>


/**
 * array_range - allocate memory for an array of integers
 *
 * @min: minimum integers
 * @max: maximum integers
 * Return: array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int num;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	num = min;
	while (num <= max)
	{
		arr[i] = num;
		i++;
		num++;
	}
	return (arr);
}
