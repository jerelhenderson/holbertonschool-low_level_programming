#include "function_pointers.h"


/**
 * int_index - write a function that matches an integer
 *
 * @array: array holding integers
 * @size: array size
 * @cmp: pointer to function
 * Return: -1 on unmet conditions
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int idx;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	idx = 0;

	while (idx < size)
	{
		if ((*cmp)(array[idx]) != 0)
			return (idx);
		idx++;
	}
	return (-1);
}
