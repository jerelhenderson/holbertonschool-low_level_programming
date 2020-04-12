#include "search_algos.h"


/**
 * linear_search - search for value in array of ints
 *
 * @array: given array
 * @size: elements in array
 * @value: value to locate
 * Return: first index where value is located, -1 if NULL
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	i = 0;

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
